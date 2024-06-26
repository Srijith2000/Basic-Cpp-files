#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Library
{
	string book_name,author_name;
	int no_of_pages,no_of_copies,book_no;
public:	
	Library() : no_of_pages(0),no_of_copies(0),book_no(0) {	}
	Library(char book[],char author[],int page,int copy,int bookno): no_of_pages(page),no_of_copies(copy),book_no(bookno)
	{
		book_name=book;  author_name=author;
	}
	void input()
	{
		cout<<"\nEnter book name,author name,no of pages,no of copies,book no :\n";
		cin>>book_name>>author_name>>no_of_pages>>no_of_copies>>book_no;
		cin.sync();
	}
	void display()
	{
		cout<<"\nBook no : "<<book_no;
		cout<<"\nBook name : "<<book_name<<"\nAuthor name : "<<author_name;
		cout<<"\nNo of Pages : "<<no_of_pages<<"\nNo of Copies : "<<no_of_copies<<endl;
	}
	void diskin()
	{
		ifstream infile("LIB.TXT");
		infile>>book_name>>author_name>>no_of_pages>>no_of_copies>>book_no;
	}
	void diskout()
	{
		ofstream outfile("LIB.TXT");
		outfile<<book_name<<" "<<author_name<<" "<<no_of_pages<<" "<<no_of_copies<<" "<<book_no<<endl;
	}
	void search(int n)
	{
		diskin(); 
		if(book_no==n) display();
	}
};
int main()
{
	Library a("Tempest","William",200,1000,1);
	int i,flag=1,n;
	cout<<"Enter a book :\n";
	while(flag!=0)
	{
		a.input();
		a.diskout();
		cout<<"Do you want to enter another book ?(1-Yes,0-No) : ";
		cin>>flag;
	}
	cout<<"\nEnter book no you want to search : ";
	cin>>n;
	a.search(n);
	return 0;
}

