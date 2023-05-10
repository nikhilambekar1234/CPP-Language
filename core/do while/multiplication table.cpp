//3-accept no from user and print the multiplication of given no.

#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	
	cout<<"enter num:";
	cin>>n;
	
	do
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
		i++;
	}
	while(i<=10);
}
