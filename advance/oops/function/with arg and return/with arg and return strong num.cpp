//strong no

#include<iostream>
using namespace std;
int fun(int n)
{
	int rem,i,sum=0,temp,j;
	
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
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	res=fun(n);
	
	if(res==1)
	{
		cout<<"strong num";
	}
	else
	{
		cout<<"not strong num";
	}
}
