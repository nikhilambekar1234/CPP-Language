//4-print multiplication table in reverse order.

#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=10;i>=1;i--)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	}
}
