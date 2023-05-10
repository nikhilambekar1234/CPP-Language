//6-accept no from user and check the no is prime or not.

#include<iostream>
using namespace std;
int main()
{
	int n,i=1,count=0;
	
	cout<<"enter num:";
	cin>>n;
	
	do
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	while(i<=n);
	if(count==2)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
}
