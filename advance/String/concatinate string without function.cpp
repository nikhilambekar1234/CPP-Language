//6-Concatinated two string

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[100],str2[100];
	int count=0,i,l1;
	
	cout<<"enter string1:\n";
	gets(str1);
	cout<<"enter string2:\n";
	gets(str2);
	l1=strlen(str1);
	
	
	for(i=0;str2[i]!='\0';i++)
	{
		str1[l1+i]=str2[i];
	}
    cout<<str1;
}
