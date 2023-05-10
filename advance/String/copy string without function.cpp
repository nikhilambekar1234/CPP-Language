//7-Copy string

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
	l1=strlen(str1);
	
	for(i=0;i<l1;i++)
//	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	cout<<"copied string2\n";
    cout<<str2;
}
