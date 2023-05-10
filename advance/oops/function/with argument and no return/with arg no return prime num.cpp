//prime no
#include<iostream>
using namespace std;
int fun(int n)
{
	int i=1,sum=0;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	if(sum==2)
	{
		cout<<"prime num";
	}
	else
	{
		cout<<"not prime num";
	}
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n);
}
