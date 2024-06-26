#include <iostream>
#include <cstring>
using namespace std;
class complex
{
private:
	int real, imag;
public:
	complex () : real(0),imag(0) { }
	complex (int r,int i) : real(r),imag(i) {  }
	void input() 
	{
		cout<<"Enter real and imaginary parts of complex no. : ";
		cin>>real>>imag;
	}
	void display() { cout<<real<<" + "<<imag<<"i"; }
	bool operator == (complex n2)
	{
		if ( (real==n2.real)&&(imag==n2.imag) ) return 1;
		else return 0;
	}
};

int main()
{
	complex n1,n2(5,6);
	n1.input();
	cout<<"N1 = "; n1.display();
	cout<<"\nN2 = "; n2.display();
	if(n1==n2) cout<<"\nStrings are equal";
	else cout<<"\nStrings are not equal";
	return 0;
}
