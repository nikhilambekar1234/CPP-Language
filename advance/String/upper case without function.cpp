//3-Uppercase

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i;
	
	cout<<"enter string:\n";
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	cout<<"upper case\n";
	cout<<str;
}
