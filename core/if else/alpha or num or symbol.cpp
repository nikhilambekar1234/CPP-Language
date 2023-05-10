//Write a C program to input any character 
//and check whether it is alphabet, digit or special character

#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter character:";
	cin>>ch;
	
	if(ch>=97 && ch<=122)
	{
		cout<<"snall alpha";
	}
	else if(ch>=65 && ch<=90)
	{
		cout<<"cap alpha";
	}
	else if(ch>=48 && ch<=57)
	{
		cout<<"digit";
	}
	else if(ch>=0 && ch<=47 ||ch>=58 && ch<=64 ||ch>=91 && ch<=96 ||ch>=123 && ch<=127)
	{
		cout<<"symbol";
	}
}
