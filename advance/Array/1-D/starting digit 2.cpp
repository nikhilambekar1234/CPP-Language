//5-print all num which whose starting digit is 2

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,rev,rem,temp,n;
	
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
	cout<<"palindrome num\n";
	for(i=0;i<10;i++)
	{
		rev=0;
		n=a[i];
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(rev%10==2)
		{
			cout<<temp<<endl;
		}
	}
}
