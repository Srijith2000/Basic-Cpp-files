#include <iostream>
#include <cstring>
using namespace std;
class String
{
private:
	char str[30];
public:
	String ( ) { str[0]='\0';}
	String (char s[]) { strcpy(str,s); }
	void input() 
	{
		cout<<"Enter a word : ";
		cin>>str;
	}
	void display() { cout<<str; }
	bool operator == (String s2);
};

bool String::operator == (String s2)
{
	if (strlen(str)==strlen(s2.str))
	{
		for(int i=0;i!='\0';i++)
		{
			if(str[i]!=s2.str[i]){  return 0; break;	}
		}
		return 1;
	}
	else return 0;
}

int main()
{
	char ch[10]={"hello"};
	String s1,s2(ch);
	s1.input();
	cout<<"S2 = "; s2.display();
	if(s1==s2) cout<<"\nStrings are equal";
	else cout<<"\nStrings are not equal";
	return 0;
}
