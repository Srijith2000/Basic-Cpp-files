#include <iostream>
using namespace std;
class Date
{
private:
	int d,m,y;
public:
	Date() : d(0),m(0),y(0) { }
	Date(int D,int M,int Y) : d(D),m(M),y(Y) { }
	void AddDays(int n) 
	{ 
		d=d+n; 
		if(m==2) { if(d>28) { m=m+1; d=d-28; } }
		else if(m<=7) 
			{
			if(m%2!=0) { if(d>31) { m=m+1; d=d-31; } }
			else { if(d>30) { m=m+1; d=d-30; } }
			}
		else 
			{
			if(m%2==0) { if(d>31) { m=m+1; d=d-31; } }
			else { if(d>30) { m=m+1; d=d-30; } }
			}	
	}
	void display()
	{
		
		if(d<10) cout<<"0"<<d;
		else cout<<d;
		cout<<"-";
		if(m==1) cout<<"Jan";		else if(m==2) cout<<"Feb";
		else if(m==3) cout<<"Mar";	else if(m==4) cout<<"Apr";
		else if(m==5) cout<<"May";	else if(m==6) cout<<"Jun";
		else if(m==7) cout<<"Jul";	else if(m==8) cout<<"Aug";
		else if(m==9) cout<<"Sep";	else if(m==10) cout<<"Oct";
		else if(m==11) cout<<"Nov";	else cout<<"Dec";	
		cout<<"-"<<y;
	}
};
int main()
{
	Date obj(10,10,2020);
	cout<<"Current Date = "; obj.display();
	obj.AddDays(25);
	cout<<"\nNew Date after adding 25 days = "; obj.display();
	return 0;
}

