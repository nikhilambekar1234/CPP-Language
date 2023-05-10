//5-Compare two string

#include<iostream>
using namespace std;
int main()
{
	char str1[100],str2[100];
	int count=0,i;
	
	cout<<"enter string1:\n";
	gets(str1);
	cout<<"enter string2:\n";
	gets(str2);
	
	
	for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			count++;
			break;
		}
	}
	if(count==1)
	{
		cout<<"not same string";
	}
	else
	{
		cout<<"same string";
	}
}
