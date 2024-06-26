#include<iostream>
#include<cstring>
using namespace std;
class publication
{
protected:
	char title[20]; 
	int price;
public:
	publication() : price(0) { }	
	publication(char ch[],int p) : price(p) { strcpy(title,ch); }
	void getdata()
	{
		cout<<"Enter title and price : ";
		cin.get(title,20); cin>>price;
	}
	void putdata()
	{
		cout<<"Title : "<<title<<"\nPrice : "<<price;
	}
};
class book : public publication
{
	int no_pages;
public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter no of pages : ";
		cin>>no_pages;
	}
	void putdata()
	{
		publication::putdata();
		cout<<"\nNo of Pages : "<<no_pages;
	}
};
class lecture : public publication
{
	int play_time;
public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter play time : ";
		cin>>play_time;
	}	
	void putdata()
	{
		publication::putdata();
		cout<<"\nPlay time : "<<play_time;
	}
};
int main()
{
	class book b; class lecture l;
	cout<<"Enter book details \n";	b.getdata();
	cin.ignore();
	cout<<"\nEnter lecture details \n";	l.getdata();
	cout<<"\n\nBook details \n\n";	b.putdata();
	cout<<"\n\nLecture details \n\n";	l.putdata();
	return 0;
}
