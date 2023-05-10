//3-accept no from user and print the multiplication of given no.

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	
	cout<<"enter num:";
	cin>>n;
	
	i=1;
	while(i<=10)
	{
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
		i++;
	}
}
