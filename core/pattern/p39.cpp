#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=1;
	char ch;
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		ch='A';
		for(j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		for(k=n-i;k>=1;k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
