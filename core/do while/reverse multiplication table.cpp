//4-print multiplication table in reverse order.

#include<iostream>
using namespace std;
int main()
{
	int i=10,n;
	
	cout<<"enter num:";
	cin>>n;
	
	do
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
		i--;
	}
	while(i>=1);
}
