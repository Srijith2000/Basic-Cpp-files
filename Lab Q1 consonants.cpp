#include<iostream>
#include<cstring>
using namespace std;
void consonant(char ch[])
{
	int i,n=strlen(ch);
	for(i=0;i<n;i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||
		   ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]==','||ch[i]=='.'||ch[i]=='!')
		{
			for(int j=i;j<n;j++)	ch[j]=ch[j+1];
			n--; i--;
		}
	}
}
int main()
{
	char str[100];
	cout<<"Enter a String : ";
	cin.get(str,100);
	consonant(str);
	cout<<"\nNew string : "<<str;
	return 0;
}
