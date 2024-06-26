#include<iostream>
#include<iomanip>
using namespace std;
struct OldPound
{
	int pound,shilling,pence;
};
struct NewPound
{
	int pound;
	float dpence,dpound;
};
int main()
{
    int choice=1; char sym=156;
	struct OldPound Old;
    struct NewPound New;
    cout<<"Convert from \n1 - Old pounds to new \n2- New pounds to old\n";
    cin>>choice;
    if(choice==1)
    {
    	cout<<"Enter Old system Pounds, Shillings and Pence : ";
    	cin>>Old.pound>>Old.shilling>>Old.pence;
    	New.pound=Old.pound;
    	New.dpence=(float)(Old.shilling*12 + Old.pence)/(20*12);
    	New.dpound=New.pound + New.dpence;
    	cout<<"New pounds : "<<setprecision(3)<<New.dpound<<" "<<sym;
	}
	else if(choice==2)
    {
    	cout<<"Enter New system Pounds and Pence : ";
    	cin>>New.dpound;
    	New.pound=(int)New.dpound;
    	New.dpence=New.dpound-New.pound;
    	Old.pound=New.pound;
    	Old.shilling= (New.dpence*240)/12;
    	Old.pence= (int)(New.dpence*240)%12;
    	cout<<"Old pounds : "<<Old.pound<<"."<<Old.shilling<<"."<<Old.pence<<" "<<sym;
	}
	else cout<<"Invalid choice!";
}
