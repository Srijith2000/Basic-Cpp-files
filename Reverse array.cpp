#include<iostream>
using namespace std;
void reverse(int a[],int n)
{
	int i,j,t;
	for(i=0,j=n-1 ; i<j ; i++,j--)
	{
		t=a[i]; a[i]=a[j]; a[j]=t;
	}
}
int main()
{
	int a[20],n,i;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reverse(a,n);
	cout<<"\nReversed array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
