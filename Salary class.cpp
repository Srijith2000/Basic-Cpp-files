#include <iostream>
using namespace std;
class salary
{
private:
	int empid;
	float basic,netsal,gross, da,hra,pf;
public:
	salary() : empid(0),basic(0.0) {}
	salary(int id,float pay) : empid(id),basic(pay) {}
	void setbasic(float x) { basic=x; }
	void set_salary() 
	{
		da=104.0f/100 * basic;
		hra=30.0f/100 * basic; 
		pf=15.0f/100 * basic; 
	}	
	void calc()
	{
		gross = basic+hra+da+pf;
		netsal = gross-pf;
	}
	void display()
	{
		cout<<"\nEmp ID : "<<empid<<"\tNet Salary : "<<netsal;
	}
	~salary() { cout<<"\nObject destroyed"; }
};
int main()
{
	salary obj;
	float bsal;
	cout<<"Enter basic salary : ";
	cin>>bsal;
	obj.setbasic(bsal);
	obj.set_salary();
	obj.calc();
	obj.display();
}

