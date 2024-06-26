#include<iostream>
using namespace std;
struct fraction
{
	int numer,denom;
};
int main()
{
    int choice=1; char sym=156;
	struct fraction a,b,c;
    cout<<"Enter numerator and denominator for 1st number :";
    cin>>a.numer>>a.denom;
    cout<<"\nEnter for 2nd number : ";
    cin>>b.numer>>b.denom;
    c.numer=a.numer*b.denom + b.numer*a.denom;
    c.denom=a.denom*b.denom;
    cout<<"Added number numerator and denominator : "<<c.numer<<"/"<<c.denom;
}
