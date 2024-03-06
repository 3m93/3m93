#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;
#define f(x) sin(x) - 5*x + 2
class BisectionMethod{
    private:
    float xUpper,xLower,xMid,e;
    int step;
    public:
    BisectionMethod():xUpper(0),xLower(0),xMid(0)
	{
	}
	void check(float a,float b)
	{
	if(a*b>0.0)
	{cout<<"Can't find solution for your limits"<<"try again"<<endl;
	Solve();
	}
	}
	void check2(float x,float y)
	{
	if(x*y>  0.0)
	{
	xLower=xMid;
	xUpper=xUpper;
	}
	else if(x*y<  0.0)
	{
	xLower=xLower;
	xUpper=xMid;
	}
	step+=1;
	}
	void Method()
	{
	do{
	xMid=(xLower+xUpper)/2;
	cout<<"Step"<<step+1<<":"<<"x("<<xMid<<")"<<"f(x)="<<f(xMid)<<endl;
	check2(f(xLower),f(xMid));
	}
	while(fabs(xMid)>e);
	        cout<<"Root is : f("<< xMid<<")"<<endl;
	        }
	
    void Solve()
    {
        cout<<"Enter Lower  Limit : ";
        cin>>xLower;
        cout<<"Enter Upper  Limit : ";
        cin>>xUpper;
        cout<<"Enter Error  Limit : ";
        cin>>e;
        check(f(xLower),f(xUpper));
        Method();
        }
        
};
int main()
{
    cout<<setprecision(4)<<fixed;
    BisectionMethod b;
    b.Solve();
    return 0;
}
