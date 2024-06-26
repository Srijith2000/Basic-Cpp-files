#include <iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) { }
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void input()
	{ 
		cout << "\nEnter feet: "; cin >> feet;
		cout << "Enter inches: "; cin >> inches;
	}
	void showdist()
	{ cout << feet << "'-" << inches << "\""; }
	Distance operator + ( Distance D)	;
};
	
Distance Distance::operator + ( Distance D)
{
	Distance temp; int t;
	temp.inches =inches + D.inches;
	temp.feet =feet + D.feet;
	if(temp.inches >= 12.0)
	{
	t=temp.inches/12;
	temp.inches = (int)temp.inches % 12;
	temp.feet += t;
	}
	return temp;
}

int main()
{
	Distance d1,d2,sum;
	cout<<"Enter value for 2 distances : \n";
	d1.input();
	d2.input();
	sum=d1+d2;
	cout << "\nSum = "; sum.showdist();
	return 0;
}
