#include<iostream>
using namespace std;
inline int cube(int n)
{
	return n*n*n;
}
int main()
{
	int n; 
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"The Cube of "<<n<<" : "<<cube(n);
	return 0;
}
