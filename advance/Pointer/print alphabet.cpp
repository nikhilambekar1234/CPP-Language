//Write a program in C to print all the alphabets using a pointer. 

#include<iostream>
using namespace std;
int main()
{
	char ch;
	char *ptr=&ch;
	
	for(ch='a';ch<='z';ch++)
	{
		cout<<*ptr<<endl;
	}
}
