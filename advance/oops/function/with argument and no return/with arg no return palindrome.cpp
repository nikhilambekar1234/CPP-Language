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
		cout<<"palindrome num";
	}
	else
	{
		cout<<"not palindrome";
	}
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n);
}
