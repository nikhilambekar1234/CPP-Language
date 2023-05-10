#include<iostream>
using namespace std;
int main()
{
	int i,j,n,no=1;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==n||j==1||i==j)
			{
				cout<<i;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
