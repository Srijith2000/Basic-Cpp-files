#include<iostream>
using namespace std;
class safearray
{
	int a[10], limit;
	
public:
	safearray() : limit(0) { }
	void input()
	{
		cout<<"Enter no of elements : ";  cin>>limit;
		cout<<"Enter elements : ";
		for(int i=0; i<5; i++)  cin>>a[i];
	}
	void putel(int pos,int el)
	{
		if(pos>=0 && pos<=limit-1)
		{
			for(int i=limit-1; i>=pos ;i--)  a[i+1]=a[i];
			a[pos]=el;
		} limit++;
	}
	int getel(int pos)
	{
		if(pos>=0 && pos<=limit-1) return a[pos];
	}
	void display()
	{
		cout<<"Array Elements : ";
		for(int i=0;i<limit;i++)  cout<<a[i]<<" ";
	}
};
int main()
{
	safearray arr; int pos,n;
	arr.input();
	cout<<"Enter element and position to be inserted : ";
	cin>>n>>pos;
	arr.putel(pos,n);
	cout<<"New ";
	arr.display();
	cout<<"\nElement at new position : "<<arr.getel(pos);
	return 0;
}
