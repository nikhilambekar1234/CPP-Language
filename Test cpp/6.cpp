#include<iostream>
using namespace std;
void prime(int n)
{
	int i, count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"prime no = "<<n<<endl;
	}
	else
	{
		cout<<"not prime num ="<<n<<endl;
	}
}
void palindrome(int n)
{
	int temp,rev=0,rem;
	
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==temp)
	{
		cout<<"given num is palindroame = "<<temp<<endl;
	}
	else
	{
		cout<<"given num is not palindroame = "<<temp<<endl;
	}
	
}
int main()
{
	prime(91);
	palindrome(24342);
}
