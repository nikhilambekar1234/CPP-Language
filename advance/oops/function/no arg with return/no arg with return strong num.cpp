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
		return 1;
	}
}
int main()
{
	int res;
	res=fun();
	
	if(res==1)
	{
		cout<<"strong num";
	}
	else
	{
		cout<<"not strong num";
	}
}
