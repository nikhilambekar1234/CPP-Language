//6-accept no from user and check the no is prime or not.

#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"prime num";
	}
	else
	{
		cout<<"not prime num";
	}
}
