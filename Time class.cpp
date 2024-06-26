#include <iostream>
using namespace std;
class time
{
private:
	int hr,min,sec;
public:
	time() : hr(0),min(0),sec(0) { }
	time (int h,int m,int s) : hr(h),min(m),sec(s) { }
	void display()
	{
		cout<<hr<<":"<<min<<":"<<sec;
	}
	void add(time t1,time t2)
	{
		hr=t1.hr + t2.hr;
		min=t1.min + t2.min;
		sec=t1.sec+t2.sec;
		if(sec>=60) { min++; sec-=60; }
		if(min>=60) { hr++; min-=60; }
	}
};
int main()
{
	time t1(6,30,40),t2(7,35,27),t3;
	t3.add(t1,t2);
	cout<<"Time 1 = "; t1.display(); 
	cout<<"\tTime 2 = "; t2.display();
	cout<<"\nAdded time = "; t3.display();
}
