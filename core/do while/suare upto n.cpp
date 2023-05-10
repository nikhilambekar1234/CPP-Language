//7-accept no from user and print the square of all no from 1-n.

#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	
	cout<<"enter num:";
	cin>>n;
	
	do
	{
		cout<<i<<"="<<(i*i)<<endl;
		i++;
	}
	while(i<=n);
}
