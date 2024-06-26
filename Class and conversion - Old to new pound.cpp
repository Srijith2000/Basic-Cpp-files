#include<iostream>
#include<process.h>
using namespace std;
char sym =156;
class oldPounds
{
	long int pounds;
	int shillings,pence;
public:
	oldPounds() : pounds(0),shillings(0),pence(0) { }	
	oldPounds(double DP)
	{
		pounds=int(DP);
		float t= DP-pounds;
		shillings= t*20;
		pence=int(t*240)%12;
	}
	oldPounds(long int pds,int sh,int pnc) : pounds(pds),shillings(sh),pence(pnc) { }
	void getSterling()
	{
		cout<<"Enter Pounds, Shillings and pence : ";
		cin>>pounds>>shillings>>pence;
	}
	void putSterling()
	{
		cout<<sym<<pounds<<"."<<shillings<<"."<<pence;
	}
	operator double()
	{
		double t;
		t= pounds + float(shillings*12 + pence)/(20*12);
		return t;
	}
	oldPounds operator + (oldPounds n2)
	{
		double t = double(oldPounds(pounds, shillings, pence)) + double(n2);
		return oldPounds(t);
	}
	oldPounds operator - (oldPounds n2)
	{
		double t = double(oldPounds(pounds, shillings, pence)) - double(n2);
		return oldPounds(t);
	}
	oldPounds operator * (oldPounds n2)
	{
		double t = double(oldPounds(pounds, shillings, pence)) * double(n2);
		return oldPounds(t);
	}
	oldPounds operator / (oldPounds n2)
	{
		double t = double(oldPounds(pounds, shillings, pence)) / double(n2);
		return oldPounds(t);
	}
};

int main()
{
	oldPounds n1,n2(5,2,8),n3;
	int choice;
	cout<<"Enter Sterling 1 : \n";		n1.getSterling();
	cout<<"\nEnter Sterling 2 : \n";	n2.getSterling();
	cout<<"\n1-Addition"<<endl<<"2-Subtraction"<<endl<<"3-Multiplication"<<endl<<"4-Division\n\nEnter choice : ";
	cin>>choice;
	if(choice==1)
	{	n3=n1+n2;	cout<<"\nAdded value : ";	}
	else if(choice==2)
	{	n3=n1-n2;	cout<<"\nSubtracted value : ";	}
	else if(choice==3)
	{	n3=n1*n2;	cout<<"\nMultiplied value : ";	}
	else if(choice==4)
	{	n3=n1/n2;	cout<<"\nDivided value : ";	}
	else { cout<<"Invalid Choice!"; exit(0); }
	n3.putSterling();
	cout<<"\nDecimal pounds : "<<sym<<double(n3);
	return 0;
}

