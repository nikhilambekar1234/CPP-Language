#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"enter num\n";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			if(k==1 || k==(2*i)-1||i==n)
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
}
