//perfect no

#include<iostream>
using namespace std;
int fun(int n)
{
	int i=1,sum=0;
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
	int n;
	
	cout<<"enter num:";
	cin>>n;
	fun(n);
}
