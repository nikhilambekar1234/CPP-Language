//1.	Write a C program to check whether a character is alphabet or not.

#include<iostream>
using namespace std;
int main()
{
    char ch;	
	cout<<"Enter character:";
	cin>>ch;
	
	if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
	{
		cout<<"alphabet";
	}
	else
	{
		cout<<"not alphabt";
    }
}
