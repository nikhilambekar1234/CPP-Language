#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	char no=65;
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				cout<<"*";
			}
			else
			{
				cout<<no;
			    no++;
			}
			
		}
		cout<<endl;
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		    if(j%2!=0)
			{
				cout<<"*";
			}
			else
			{
				cout<<no;
			    no++;
			}
		}
		cout<<endl;
	}
}
