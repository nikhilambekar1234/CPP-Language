//1-Find length of string

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
		count++;
	}
	cout<<"length = "<<count;
}
