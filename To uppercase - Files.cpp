#include<iostream>
#include<fstream>
#include<string>
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
		for(int j=0; content[j]!='\0'; j++)
		{
			content[j]=toupper(content[j]);
		}
		f2<<content<<endl;
		cout<<"line "<<i<<" copied"<<endl;
		i++;
	}
	cout<<"\n\nCopy and conversion to uppercase successful";
	return 0;
}
