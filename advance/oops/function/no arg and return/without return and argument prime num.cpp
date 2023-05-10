//prime no
#include<iostream>
using namespace std;
int fun()
{
	int n,i=1,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
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
	fun();
}
