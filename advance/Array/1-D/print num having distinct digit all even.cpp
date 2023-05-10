//7-print the num from array where distinct digit present in the number are all even.

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,rev,rem,temp,n,c1,c2;
	
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
	cout<<"num\n";
	for(i=0;i<10;i++)
	{
		c1=0;
		c2=0;
		n=a[i];
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			c1++;
			{
				if(rem%2==0)
				{
					c2++;
				}
			}
			n=n/10;
		}
		if(c1==c2)
		{
			cout<<temp<<endl;;
		}
	}
}
