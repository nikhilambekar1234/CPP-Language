#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	char ch='A';
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<ch;
		}
		ch++;
		cout<<endl;
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
