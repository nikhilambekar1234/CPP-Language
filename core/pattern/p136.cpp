#include<iostream>
using namespace std;
int main()
{
	int  n,i,j,k,no;
	cout<<"enter num:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			cout<<"*";
		}
		for(k=1;k<i;k++)
		{
			cout<<" ";
		}
		for(k=2;k<i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=(n-i)+1;j++)
		{
			if(j==1 && i==1)
			{
				
			}
			else
			{
			    cout<<"*";	
			}
			
		}
		cout<<endl;
		
	}
}
