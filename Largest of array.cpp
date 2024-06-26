#include<iostream>
using namespace std;
int maxint(int a[],int n)
{
	int i,pos=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>a[pos]) pos=i;
	}
	return pos;
}
int main()
{
	int a[20],n,pos;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	pos=maxint(a,n);
	cout<<"\nLargest element : "<<a[pos];
	return 0;
}
