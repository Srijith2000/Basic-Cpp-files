#include<iostream>
using namespace std;
double power(double n,int p)
{
	double ans=1; 
	for(int i=1; i<=p; i++)
	{
		ans=n * ans;
	}
	return ans;
}
double power(int n,int p)
{
	double ans=1; 
	for(int i=1; i<=p; i++)
	{
		ans=(double)n * ans;
	}
	return ans;
}
double power(float n,int p)
{
	double ans=1; 
	for(int i=1; i<=p; i++)
	{
		ans=(double)n * ans;
	}
	return ans;
}
double power(long n,int p)
{
	double ans=1; 
	for(int i=1; i<=p; i++)
	{
		ans=(double)n * ans;
	}
	return ans;
}
void power(char ch,int p)
{
	
	for(int i=1; i<=p; i++)
	{
		cout<<ch<<" ";
	}
}
int main()
{
	int n,p; double n2; char ch='&'; long n3; float n4;
	cout<<"Enter base and power : ";
	cin>>n>>p;
	n2=n4=n3=n;
	power(n,p);
	cout<<" Power(int) : "<<power(n,p)<<endl<<" Power(long) : "<<power(n3,p)<<endl<<" Power(float) : "<<power(n4,p)<<endl;
	cout<<" Power(double) : "<<power(n2,p)<<endl<<" Power(char) : "; power(ch,p);
	return 0;
}
