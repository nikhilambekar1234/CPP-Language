//2-Make addition of all palindrome num from array and check whether the number is palindrome or not

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int m,i,j,count=0,rev,rem,temp,n,sum=0;
	int *size=NULL;
	
	cout<<"enter num:\n";
	cin>>m;
	
	size=(int*)calloc(m,sizeof(int));
	
	if(size==NULL)
	{
		cout<<"memory not allocated\n";
	}
	
	cout<<"enter arr:\n";
	for(i=0;i<m;i++)
	{
		cin>>*(size+i);
	}
	cout<<"your data:\n";
	for(i=0;i<m;i++)
	{
		cout<<*(size+i)<<endl;
	}
	cout<<"palindrome num\n";
	for(i=0;i<m;i++)
	{
		rev=0;
		n=*(size+i);
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
