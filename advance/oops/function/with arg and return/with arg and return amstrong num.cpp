//amstrong no

#include<iostream>
using namespace std;
int fun(int n)
{
	int temp,sum=0,rem,mult=0;
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
		return 1;
	}

}
int main()
{
	int result;
	int n;
	
	cout<<"enter num:";
	cin>>n;
	result=fun(n);
	
	if(result==1)
	{
		cout<<"amstrong num";
	}
	else
	{
		cout<<"not amstrong num";
	}
}
