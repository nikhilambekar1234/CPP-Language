//4-print multiplication table in reverse order.

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	
	cout<<"enter num:";
	cin>>n;
	
	i=10;
	while(i>=1)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
		i--;
	}
}
