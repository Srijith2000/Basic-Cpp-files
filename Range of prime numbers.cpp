#include<iostream>
using namespace std;
int isprime(int n)
{
	int i;
	for (i=2; i<=(n/2)+1 ; ++i)
	{
		if (n==2) break;
		if (n%i==0) { return 0; goto end; }
	}
	return 1;
	end: ;
}
int main()
{
	int a,b,i; 
	cout<<" Enter the range for prime numbers : ";
    cin>>a>>b;
    cout<<"\nPrime numbers between "<<a<<" and "<<b<<" : ";
    for(i=a; i<=b; i++)
    {
    	if(isprime(i)) cout<<i<<" ";
	}
	return 0;
}
