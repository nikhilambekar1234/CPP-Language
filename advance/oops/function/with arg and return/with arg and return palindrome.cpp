//palindrome no

#include<iostream>
using namespace std;
int fun(int n)
{
	int i,rem,temp,rev=0;
	
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
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	res=fun(n);
	
	if(res==1)
	{
		cout<<"palindrome num";
	}
	else
	{
		cout<<"not palindrome";
	}
}
