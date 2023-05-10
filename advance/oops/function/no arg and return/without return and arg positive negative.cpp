//positive/negative

#include<iostream>
using namespace std;
int fun()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	if(n>0)
	{
		cout<<"positive";
	}
	else if(n<0)
	{
		cout<<"negative";
	}
	else
	{
		cout<<"you etered 0";
	}
}
int main()
{
	fun();
}
