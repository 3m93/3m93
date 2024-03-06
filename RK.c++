#include<iostream>
#include<iomanip>
using namespace std;
class rk2{
	private:
		int n;
		float k1,k2;
		public:
			float dydx(float x, float y)
			{
				return((x-y)/(x+y));
			}
			float RK(float x0, float y0,float x, float h){
				n=(int)((x-x0)/h);
				float y=y0;
				cout<<"\n"<<"\t"<<"x"<<"\t"<<"y"<<endl;
				for(int i=1;i<=n;i++)
				{
					k1=h*dydx(x0,y);
					k2=h*dydx(x0+h,y+k1);
					y=y+(1.0/2.0)*(k1+k2);
					x0=x0+h;
					cout<<"\nStep"<<i<<" : "<<x0<<"\t"<<y;
				}
				return y;
			}
};
class rk4{
	private:
		int n;
		float k1,k2,k3,k4,k5;
		public:
			float dydx(float x, float y)
			{
				return((x-y)/2);
			}
			float RK(float x0, float y0,float x, float h){
				n=(int)((x-x0)/h);
				float y=y0;
				cout<<"\n"<<"\t"<<"x"<<"\t"<<"y"<<endl;
				for(int i=1;i<=n;i++)
				{
					k1=h*dydx(x0,y);
					k2=h*dydx(x0+0.5*h,y+0.5*k1);
						k3=h*dydx(x0+0.5*h,y+0.5*k2);
							k2=h*dydx(x0+h,y+k3);
					y=y+(1.0/6.0)*(k1+2*k2+2*k3+k4);
					x0=x0+h;
					cout<<"\nStep"<<i<<" : "<<x0<<"\t"<<y;
				}
				return y;
			}
};
int main()
{
	cout<<setprecision(4)<<fixed;
	char choice;
	int method;
	float x0=0,y=1,x=2,h=0.2;
	do{
		cout<<"Select Method"<<endl<<"1)RK 2nd order"<<endl<<"2)RK 4th order"<<endl<<"Enter Choice:";
		cin>>method;
		switch(mrthod){
			case 1:
				{
					cout<<"\t"<<"x0="
				}
		}
	}
}
