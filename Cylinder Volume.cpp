#include<iostream>
using namespace std;
inline float compute(int r=1,int h=2)
{
	return 3.141 * (float)r*r * h;
}
int main()
{
	int r,h; 
	cout<<"Enter radius and height : ";
    cin>>r>>h;
    cout<<"Volume(Default) : "<<compute()<<endl<<"Volume(User): "<<compute(r,h);
	return 0;
}
