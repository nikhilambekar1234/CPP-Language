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
		cout<<"palindrome num";
	}
	else
	{
		cout<<"not palindrome";
	}
}
int main()
{
	fun();
}
