#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"Enter number of terms :";
	cin>>n;
	cout<<i<<",";
	for(i=1;i<=n/2;i++)
	{
		cout<<2*i<<","<<3*i<<",";
	}
	return 0;
}
