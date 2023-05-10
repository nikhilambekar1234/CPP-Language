//even/odd

#include<iostream>
using namespace std;
int fun(int n)
{
	if(n%2==0)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n);
}
