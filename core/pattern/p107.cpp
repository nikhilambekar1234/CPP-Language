#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(n-i)+1;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
}
