#include<iostream>
using namespace std;
int main()
{
	int i=1,n1,n2,lcm,gcd,numer,denom,rem;
	cout<<"Enter 2 numbers : ";
	cin>>n1>>n2;
	numer=n1; denom=n2; rem=numer%denom;
	while(rem!=0)
	{
		numer=denom;
        denom=rem;
        rem=numer%denom;
	}
	gcd=denom;
	lcm=(n1*n2)/gcd;
	cout<<"LCM : "<<lcm<<"\tGCD : "<<gcd;
	return 0;
}
