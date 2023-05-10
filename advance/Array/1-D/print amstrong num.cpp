//4-print all amstrong no

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,mult,rem,temp,n,sum;
	
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
	cout<<"Amstrong num\n";
	for(i=0;i<10;i++)
	{
		sum=0;
		n=a[i];
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			mult=rem*rem*rem;
			sum+=mult;
			n=n/10;
		}
		if(temp==sum)
		{
			cout<<temp<<endl;
		}
	}
}
