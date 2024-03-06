#include<iostream>
#include<iomanip>
#include<math.h>
#define f1(a,b,c,d) (6+b-2*c)/10
#define f2(a,b,c,d) (25+a+b-3*d)/11
#define f3(a,b,c,d) (11-2*a +b +c)/10
#define f4(a,b,c,d) (15-3*b+4*c)/8
using namespace std;
int main()
{
	float a0=0, b0=0, c0=0, d0=0,a1,b1,c1,d1,size;
	int step=1;
	cout<<setprecision(2)<<fixed;
	cout<<"Enter Iterations You Want To Perform :";
	cin>>size;
	cout<<endl<<"Count\ta\tb\tc\td"<<endl;
	for(int i=0;i<size;i++)
	{
		a1=f1(a0,b0,c0,d0);
		a0=a1;
		b1=f2(a0,b0,c0,d0);
		b0=b1;
		c1=f3(a0,b0,c0,d0);
		c0=c1;
		d1=f4(a0,b0,c0,d0);
		d0=d1;
		cout<<step<<"\t"<<a1<<"\t"<<b1<<"\t"<<c1<<"\t"<<d1<<endl;
		step++;
	}
	cout<<endl<<"Solution: a="<<a1<<",b ="<<b1<<",c ="<<c1<<",d ="<<d1;
	return 0;
}
