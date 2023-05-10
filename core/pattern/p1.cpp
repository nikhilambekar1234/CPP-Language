#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2!=0 && j%2!=0)
			{
				cout<<"1";
			}
			else if(i%2==0 && j%2==0)
			{
				cout<<"@";
			}
			else if(i%2!=0 && j%2==0)
			{
				cout<<"0";
			}
			else if(i%2==0 && j%2!=0)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
