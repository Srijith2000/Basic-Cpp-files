#include <iostream>
using namespace std;
class tollbooth
{
private:
	unsigned int n;
	double money;
public:
	tollbooth() : n(0),money(0.0) { }
	void payingcar() { n++; money += 0.50; }
	void nopaycar() { n++; }	
	void display()
	{
		cout<<"\nTotal cars = "<<n<<"\tTotal cash = "<<money<<" Rs";
	}
};
int main()
{
	int choice=1;
	tollbooth tb;
	while(choice==1 || choice==2)
	{
		cout<<"Choose  1-Paying car   2-Non Paying car   Any other key - exit\nEnter choice : ";
		cin>>choice;
		if(choice==1) tb.payingcar();
		else if (choice==2) tb.nopaycar();
		else break;
	}
	tb.display();
}

