//6-accept no from user and check the no is prime or not.

#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	
	cout<<"enter num:";
	cin>>n;
	
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
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
