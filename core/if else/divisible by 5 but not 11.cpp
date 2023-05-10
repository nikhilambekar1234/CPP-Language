//10-accept no from user and check the num is divisible by 5 but not divisible by 11

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	if(n%5==0 && n%11!=0)
	{
		cout<<"valid";
	}
	else
	{
		cout<<"invalid";
	}
}
