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
		ch='A';
		no=1;
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				cout<<no;
				
			}
			else
			{
				cout<<ch;
			    
			}
			if(j%2==0)
			{
				ch++;
			}
			no++;
		}
		
		cout<<endl;
	}
	for(i=n-1;i>=1;i--)
	{
		ch='A';
		no=1;
		for(j=1;j<=i;j++)
		{
		    if(j%2!=0)
			{
				cout<<no;
				
			}
			else
			{
				cout<<ch;
			    
			}
			if(j%2==0)
			{
				ch++;
			}
			no++;
		}
		cout<<endl;
	}
}
