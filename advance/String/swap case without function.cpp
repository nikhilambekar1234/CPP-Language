//8-Accept string & swap the case of all character present in the string

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int count=0,i;
	cout<<"enter string:\n";
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	cout<<"swap case\n";
	cout<<str;
}
