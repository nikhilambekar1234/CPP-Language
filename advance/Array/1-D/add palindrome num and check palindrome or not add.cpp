//8-from array make addition of all palindrome number
// & check result addition is palindrome or not

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,rev,rem,temp,n,sum=0;
	
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
		if(temp==rev)
		{
			sum+=rev;
			cout<<rev<<endl;
			
		}
	}
	cout<<"sum = "<<sum<<endl;
		rev=0;
		n=sum;
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(temp==rev)
		{
			cout<<"palindrome sum"<<endl;
		}
		else
		{
			cout<<"not palindrome sum"<<endl;
		}
	
}
