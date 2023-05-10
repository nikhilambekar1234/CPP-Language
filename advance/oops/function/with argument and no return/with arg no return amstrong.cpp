//amstrong no

#include<iostream>
using namespace std;
int fun(int n)
{
	int i,temp,sum,rem,mult;
	
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
		cout<<"amstrong num";
	}
	else
	{
		cout<<"not amstrong num";
	}
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	fun(n);
}
