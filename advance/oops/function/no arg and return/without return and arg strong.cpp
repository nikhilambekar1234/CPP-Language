//strong no

#include<iostream>
using namespace std;
int fun()
{
	int n,rem,i,sum=0,temp,j;
	
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
	cout<<sum<<endl;
	if(temp==sum)
	{
		cout<<"strong num";
	}
	else
	{
		cout<<"not strong num";
	}
}
int main()
{
	fun();
}
