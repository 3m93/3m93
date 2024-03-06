#include<iostream>
using namespace std;
int main()
{
	float x[20], y[20][20];
	int i,j,n,x1,x0,h;
	
	cout<<"Enter value of x19"<<endl;
	cin>>x1;
	
	cout<<"Enter number of data? "<<endl;
	cin>>n;
	cout<<"Enter data: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"x[" <<i<<"]=";
		cin>>x[i];
		x0=x[0];
		cout<<"y[" <<i<<"]=";
		cin>>y[i][0];
	}
	int u=(x1-x0);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			y[j][i]=y[j+1][i-1]-y[j][i-1];
		}
	}
	
	cout<<endl<<"FORWARD DIFFERENCE TABLE"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<x[i];
		for(j=0;j<n-i;j++)
		{
			cout<<"\t"<<y[i][j];
		}
		cout<<endl;
	}
	int y1=y[0][0]+u*y[1][0]+(u*(u-1)*y[1][0])/2+(u*(u-1)*(u-2)*y[2][1])/6;
	return 0;
}
