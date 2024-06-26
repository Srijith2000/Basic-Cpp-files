#include<iostream>
using namespace std;
int main()
{
	float basic,hra,da,gross;
	cout<<"Enter basic salary : ";
	cin>>basic;
	if(basic<=10000) { hra=basic*20/100; da=basic*80/100; }
	else if(basic<=20000) { hra=basic*25/100; da=basic*90/100; }
	else { hra=basic*30/100; da=basic*95/100; }
	gross= basic+hra+da;
	cout<<"\nGross salary : "<<gross;
	return 0;
}
