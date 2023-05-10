//7-accept no from user and print the square of all no from 1-n.

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	
	cout<<"enter num:";
	cin>>n;
	
	i=1;
	while(i<=n)
	{
		cout<<i<<"="<<(i*i)<<endl;
		i++;
	}
}
