#include<iostream>
using namespace std;
int main()
{
	int i,j,n,no=1;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		no=1;
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				cout<<no;
				no++;
			}
			else
			{
				cout<<ch;
			    ch++;
			}
			
		}
		cout<<endl;
	}
	for(i=n-1;i>=1;i--)
	{
		no=1;
		for(j=1;j<=i;j++)
		{
		    if(j%2!=0)
			{
				cout<<no;
				no++;
			}
			else
			{
				cout<<ch;
			    ch++;
			}
		}
		cout<<endl;
	}
}
