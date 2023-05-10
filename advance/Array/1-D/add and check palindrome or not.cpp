//6-make addition of all elements and check the addition is palindrome or not

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
	cout<<"addition\n";
	for(i=0;i<10;i++)
	{
		sum+=a[i];
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
