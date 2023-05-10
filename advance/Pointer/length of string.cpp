//10. Write a program in C to Calculate the length of the string using a pointer. 

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i,count=0;
	char *ptr=str;
	
	cout<<"enter string:\n";
	gets(str);
	
	for(i=0;*(ptr+i)!='\0';i++)
	{
		count++;
	}
	cout<<"length of string = "<<count;
}
