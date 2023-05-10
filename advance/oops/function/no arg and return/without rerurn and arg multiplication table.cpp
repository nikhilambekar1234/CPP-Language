//multiplication table

#include<iostream>
using namespace std;
int fun()
{
	int n,i;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	}
}
int main()
{
	fun();
}
