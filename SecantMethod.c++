#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#define f(x) pow(x,3) - 5*x +1
class SecantMethod{
private: 
float x0, x1, x2, f_of_x0, f_of_x1, f_of_x2, e ;
int step, max;
public:
SecantMethod(): x0(0), x1(0), x2(0) ,f_of_x0(0),f_of_x1(0),f_of_x2(0),e(0)
{
}
void Input(){
cout<<"Enter Initial Guess x";
cin>> x8;
cout << "Enter Initial Guess x1 : ";
cin >> x1;
cout << "Enter Tolerable Guess:";
cin >> ;
cout<<"Enter Max Iterations:";
cin >> max;
}
void Calculations(){
Input();
for (int i = 8; i < max ; i++){
f_of_xit f(x0);
f_of_x1 = f(x1);
if(f_of_x0 = f_of_x1){
cout << "Both Functions Are Now Equal, Hence Cannot Proceed More exit(0)";
}
x2 = xl - (x1-xe) *f_of_x1/(f_of_x1 - f_of_x0); 
f_of_x2 = f(x2);
cout << "Step" << x2 << endl;
REPORT TITLE
of_xe - f_of_x1;
+_of_x1 = f_of_x2;
step++;
}

};
int main()
{
cout << setprecision(4) << fixed;
SecantMethods;
sm.Calculations();
}
