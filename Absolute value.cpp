#include<iostream>
using namespace std;
int abs(int n)
{
	if(n>=0) return n;
	else return -n;
}
float abs(float n)
{
	if(n>=0) return n;
	else return -n;
}
double abs(double n)
{
	if(n>=0) return n;
	else return -n;
}
int main()
{
	int a=-10; float b=-20.2; double c=-30.3; 
	cout<<"Absolute values : "<<abs(a)<<", "<<abs(b)<<", "<<abs(c);
	return 0;
}
