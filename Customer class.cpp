#include <iostream>
#include <string>
using namespace std;
class customer
{
private:
	static int count;
	int custID, age;
	char name[];
	long long int ph;
public:
	customer() : age(0), ph(0) { count++; custID=count; }
	customer(int Age, long long int PH ) : age(Age), ph(PH) { count++; custID=count; }
	void input()
	{ 
		cout << "\nCustomer ID : "<<custID;
		cout << "\nEnter Name : "; cin >> name;
		cout << "Enter Age : "; cin >> age;
		cout << "Enter Ph No : "; cin >> ph;
	}
	void display() const
	{ 
		cout << "\nCustomer ID : "<<custID;
		cout << "\nName : "<< name;
		cout << "\nAge : "<<age;
		cout << "\nPh No : "<<ph;
	}
};
//static int customer::count=0;

int main()
{
	customer cust[10], t(20,2433777);
	int n,i;
	cout<<"Enter number of customers : "; cin>>n;
}
