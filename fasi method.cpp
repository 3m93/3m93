#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;
#define f(x) sin(x) - 5*x + 2
class BisectionMethod{
    private:
    float xUpper,xLower,xMid,e,fLower,fUpper,fMid;
    int step;
    public:
    BisectionMethod():xUpper(0),xLower(0),xMid(0);
    {

    }
    void Solve()
    {
        cout<<"Enter Lower  Limit : ";
        cin>>xLower;
        cout<<"Enter Upper  Limit : ";
        cin>>xUpper;
        cout<<"Enter Error  Limit : ";
        cin>>e;
        fLower = f(xLower);
        fUpper = f(xUpper);
        if (fLower * fUpper>0.0)
        {
            cout<<"Cannot Find Solution For Your Limit"<<endl<<"Try Again"<<endl;
        }
        do
        {
            xMid = xLower-(xLower-xUpper)*fLower/(fLower-fUpper);
            fMid = f(xMid);
            cout<<"Step"<<step+1<<":"<<"x("<<xMid<<")"<<"f(x)="<<fMid<<endl;
            if(fLower*fUpper < 0)
            {
                xUpper = xMid;
                fUpper = fMid;
            }
            else
            {
                xLower = xMid;
                fLower = fMid;
            }
            step+=1;
        }
        while(fabs(fMid)>e);
        cout<<"Root is :"<< xMid<<endl;
    }
};
int main()
{
    cout<<setprecision(4)<<fixed;
    BisectionMethod b;
    b.solve();
    return 0;
}