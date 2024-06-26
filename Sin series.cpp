#include<iostream>
using namespace std;
float sinx(float x,int n)
{
	float sum=x,t=x; int i;
	for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    return sum;
}
int main()
{
	int n; float x;
	cout<<" Enter the value for x for Sin(x) in degrees : ";
    cin>>x;
	cout<<"Enter number of terms :";
	cin>>n;
	x=x*3.14159/180;
	cout<<" The value of Sin x = "<<sinx(x,n);
	return 0;
}
