//2-Accept string & convert all string into lowercase

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i;
	
	cout<<"enter string:";
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		
	}
	cout<<"lower case\n";
	cout<<str<<endl;
	cout<<" OR lower case\n";
	for(i=0;str[i]!='\0';i++)
	{
			cout<<str[i];
	}
}
