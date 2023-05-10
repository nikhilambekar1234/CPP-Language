//7-accept no from user and check the no is strong no.

#include<iostream>
using namespace std;
int main()
{
	int n,i=1,temp=0,sum=0,rem,j;
	
	cout<<"enter num:";
	cin>>n;
	
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		
		for(i=1,j=1;i<=rem;i++)
		{
			j=j*i;
		}
		sum+=j;
		n=n/10;
	}
	cout<<"sum = "<<sum<<endl;
	if(sum==temp)
	{
		cout<<"strong num";
	}
	else
	{
		cout<<"not strong num";
	}
}
