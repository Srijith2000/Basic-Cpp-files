#include <iostream>
using namespace std;
float SI(float p,int n,float r=11.5)
{
	float ans=(p*n*r)/100;
	return ans;
}
int main()
{
	float p,n; int r;
	cout<<"Enter Principle, No of yrs and Rate if interset : "; 
	cin>>p>>n>>r;
	cout<<"\nSimple interest without default rate value : "<<SI(p,n,r)<<" Rs";
	cout<<"\nSimple interest with default rate value(11.5%) : "<<SI(p,n)<<" Rs";
	return 0;
}

