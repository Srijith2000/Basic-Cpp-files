#include <iostream>
using namespace std;
class Int
{
private:
	int a;
public:
	Int() : a(0) { }
	Int (int n) : a(n) { }
	void display() { cout<<a; }
	void add(Int n1,Int n2) { a=n1.a + n2.a; }
	void sub(Int n1,Int n2) { a=n1.a - n2.a; }
	void mul(Int n1,Int n2) { a=n1.a * n2.a; }
	void div(Int n1,Int n2) { a=n1.a / n2.a; }
	void inc() { a++; }
	void dec() { a--; }
	void mod(Int n1,Int n2) { a=n1.a % n2.a; }
};
int main()
{
	Int n1(10),n2(5),n3;
	cout<<" N1 = "; n1.display(); cout<<"   N2 = "; n2.display();
	n3.add(n1,n2); cout<<"\n\n Add : "; n3.display();
	n3.sub(n1,n2); cout<<"\n Sub : "; n3.display();
	n3.mul(n1,n2); cout<<"\n Mul : "; n3.display();
	n3.div(n1,n2); cout<<"\n Div : "; n3.display();
	n1.inc(); cout<<"\n Inc : "; n1.display();
	n2.dec(); cout<<"\n Dec : "; n2.display();
	n3.mod(n1,n2); cout<<"\n Mod : "; n3.display();
}
