//even/odd

#include<iostream>
using namespace std;
int fun()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
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
	fun();
}
