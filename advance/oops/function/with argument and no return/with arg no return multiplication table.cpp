//multiplication table

#include<iostream>
using namespace std;
int fun(int n)
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	}
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	fun(n);
}
