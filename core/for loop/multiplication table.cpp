//3-accept no from user and print the multiplication of given no.

#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
	}
}
