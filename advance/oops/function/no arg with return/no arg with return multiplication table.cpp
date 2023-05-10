//multiplication table

#include<iostream>
using namespace std;
int fun()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	return n;
}
int main()
{
	int i,n;
	n=fun();
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	}
}
