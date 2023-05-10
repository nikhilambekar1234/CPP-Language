//perfect no

#include<iostream>
using namespace std;
int fun()
{
	int n,i=1,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(n==sum)
	{
		cout<<"perfect num";
	}
	else
	{
		cout<<"not perfect num";
	}
}
int main()
{
	fun();
}
