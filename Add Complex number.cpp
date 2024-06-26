#include<iostream>
using namespace std;
struct complex
{
	int real,imag;
};
void add(struct complex a,struct complex b)
{
	struct complex c;
	c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    cout<<"Addition : "<<c.real<<" + "<<c.imag<<"i";
}
void subtract(struct complex a,struct complex b)
{
	struct complex c;
	c.real=a.real-b.real;
    c.imag=a.imag-b.imag;
    cout<<"\nSubtraction : "<<c.real<<" + "<<c.imag<<"i";
}
void conj(struct complex a)
{
	cout<<"\nConjugate : "<<a.real<<" + "<<-a.imag<<"i";
}
int main()
{
    int choice=1; char sym=156;
	struct complex a,b,c;
    cout<<"Enter real and imaginary part for 1st number : ";
    cin>>a.real>>a.imag;
    cout<<"\nEnter for 2nd number : ";
    cin>>b.real>>b.imag;
    add(a,b);
    subtract(a,b);
    conj(a);
}
