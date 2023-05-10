//30. Write a C++ program to check whether a given number is a palindrome or not. 

#include<iostream>
using namespace std;
int main()
{
	int n,i,rev,rem,temp;
	
	cout<<"enter element:\n";
	cin>>n;
	
		rev=0;
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(temp==rev)
		{
			cout<<"palindrome"<<endl;
		}
		else
		{
			cout<<"not palindrome"<<endl;
		}
}
