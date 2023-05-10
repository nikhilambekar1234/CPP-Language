//1-Find length of string
//43. Write a C++ program to find the length of a given string using string functions. 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	int l=0,i;
	cout<<"enter string:\n";
	gets(str);
	
	l=strlen(str);
	cout<<"length = "<<l;
}
