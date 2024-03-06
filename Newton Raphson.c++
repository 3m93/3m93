#include <iostream> 
#include <iomanip>

#include <math.h>

using namespace std;

#define f(x) sin(x) - 5

#define g(x) cos(x) - 5

class NewtonRaphson{

private:

float x0,x1,f_of_x0,f_of_x1,derivative_of_x0,e;
 int step, max;

public:

NewtonRaphson(): x0(0), x1(0), f_of_x0(0), f_of_x1(0), derivative_of_x0(0), e(0),

step(0), max(0)
{
}

void Input(){

cout << "Enter Initial Guess" ;

cin >> x0;

cout << "Enter Tolerable Error : ";

cin >> e;

cout << "Enter Maximum Iterations";

cin >> max;

}

void Calculation(){ 
Input();
do{
f_of_x0 = f(x0);

derivative_of_x0 = g(x0); 
if(derivative_of_x0 == 0.0)
{ cout << "Math Error...";

exit(0);
}
x1=x0-(f_of_x0/derivative_of_x0);

cout << "Step" << step+1 << ":"<<"x"<<step+1<<"="<<x1<<endl;

x0 = x1;

step+=1;

if(step> max)
 { 
 cout << "Iterations Reached Max, Could Not Find Convergance" << endl;
 exit(0);

}

f_of_x1 = f(x1);
}
while(fabs(f_of_x1) > e);
}
};
int main()
{
cout << setprecision(4) << fixed;

NewtonRaphson nr;

nr.Calculation();

return 0;
}

