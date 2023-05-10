//2-make addition of all odd element and check the addition is prime or not

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,sum=0,count=0;
	
	cout<<"enter element:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"your data:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"addition of odd element:\n";
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			sum+=a[i];
		}
	}
	cout<<"sum = "<<sum<<endl;
	for(i=1;i<=sum;i++)
	{
		if(sum%i==0)
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
