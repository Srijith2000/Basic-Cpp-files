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
	Distance avgdist( Distance[], int n);	
	};
	
Distance Distance::avgdist( Distance D[], int n)
{
	Distance temp; int t;
	for(int i=0;i<n;i++)
	{
	temp.inches += D[i].inches;
	temp.feet += D[i].feet;
	}
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
	Distance dist[20], avg;
	int i,n; 
	cout<<"Enter number of distance : ";
	cin>>n;
	for(i=0; i<n; i++) {
		dist[i].input();
	}
	for(i=0; i<n; i++) {
		dist[i].showdist(); cout<< "\t";
	}
	avg = avg.avgdist(dist,n); 
	cout << "\nAvg of "<<n<<"distances = "; avg.showdist();
	return 0;
}
