//palindrome no

#include<iostream>
using namespace std;
int fun()
{
	int n,i,rem,temp,rev=0;
	
	cout<<"enter num:";
	cin>>n;
	
	temp=n;
	
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
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
		cout<<"palindrome num";
	}
	else
	{
		cout<<"not palindrome";
	}
}
