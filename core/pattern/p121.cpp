#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=1;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			if(i%2!=0)
			{
				cout<<"* ";
			}
			else
			{
				cout<<no<<" ";
				no++;
			}
			
		}
		cout<<endl;
	}
}
