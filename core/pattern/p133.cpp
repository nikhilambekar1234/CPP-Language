#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=1;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			if(k==1||k==(2*i)-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<"@";
			}
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=2*(n-i)+1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
