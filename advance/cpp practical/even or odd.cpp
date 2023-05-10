//18. Write a C++ program to check whether a given number is even or odd

#include<iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"enter a num:";
	cin>>a;
	
	if(a%2==0)
	{
		cout<<"EVEN NUM";
	}
	else
	{
		cout<<"ODD NUM";
	}
}
