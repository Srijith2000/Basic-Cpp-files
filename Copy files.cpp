#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i=1;
	string content;
	ifstream f1("old.txt");
	ofstream f2("new.txt");
	while(!f1.eof())
	{
		getline(f1,content);
		f2<<content<<endl;
		cout<<"line "<<i<<" copied"<<endl;
		i++;
	}
	cout<<"\n\nCopy successful";
	return 0;
}
