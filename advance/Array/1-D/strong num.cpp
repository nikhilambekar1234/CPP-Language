//4-print all strong no

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,mult,rem,temp,n,sum,k;
	
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
	cout<<"strong num\n";
	for(i=0;i<10;i++)
	{
		sum=0;
		n=a[i];
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			for(k=1,j=1;k<=rem;k++)
			{
				j=j*k;
			}
			sum+=j;
			n=n/10;
		}
		if(temp==sum)
		{
			cout<<temp<<endl;
		}
	}
}
