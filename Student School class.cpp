#include<iostream>
using namespace std;
class SCHOOL
{protected:
	long long number;
	string name;
	int age;
};
class STUDENT : public SCHOOL
{
	string instr_name;
	int marks[3];
	float avg;
	char grade;
public:
	void input()
	{
		avg =0;
		cout<<"Enter Name, number and age : ";
		cin>>name>>number>>age;
		cout<<"Enter Instructor name :";
		cin>>instr_name;
		cout<<"Enter marks in 3 subjects\n";
		for(int i=0;i<3;i++)  
		{
			cin>>marks[i];
			avg=avg+marks[i];
		}
		avg=avg/3.0;
		if(avg>80)  grade='A';
		else if(avg>50)  grade='B';
		else if(avg>=40)  grade='C';
		else grade='F';
	}	
	void display()
	{
		cout<<"Name : "<<name<<"\nAge : "<<age<<"\nInstructor name : "<<instr_name;
		cout<<"\nAverage and grade : "<<avg<<"% "<<grade;
	}
};
class INSTRUCTOR : public SCHOOL
{
	string designation;
	long int salary;
public:
	void input()
	{
		cout<<"Enter Name, number and age : ";
		cin>>name>>number>>age;
		cout<<"Enter Designaion :";
		cin>>designation;
		cout<<"Enter salary : ";
		cin>>salary;
	}	
	void display()
	{
		cout<<"Name : "<<name<<"\nAge : "<<age<<"\nDesignation : "<<designation;
		cout<<"\nSalary : "<<salary<<" Rs";
	}	
};

int main()
{
	STUDENT s[5]; int i=0;
	INSTRUCTOR ins[5]; int j=0;
	int choice=1;
	
	while(choice==1||choice==2)
	{
	cout<<"Enter Input for --> 1-Student  2-Instructor \n(Any other number for stop getting input) \nEnter choice: ";
	cin>>choice;
	if(choice==1)
	{
		s[i].input(); i++;
	}
	else if(choice==2)
	{
		ins[i].input(); j++;
	}
	}
	for(int k=0;k<i;k++) s[k].display();
	for(int k=0;k<j;k++) ins[k].display();
	return 0;
}
