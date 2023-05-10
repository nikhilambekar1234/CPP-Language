//8-accept no from user and print the square of all no from 1-n.

#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<i<<"="<<(i*i)<<endl;
	}
}
