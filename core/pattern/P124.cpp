#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=1;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			if(i%2!=0)
			{
				cout<<no<<" ";
			}
		    else
		    {
		    	cout<<ch<<" ";
		    	
			}
		}
		if(i%2!=0)
		{
			no++;
		}
		else
		{
			ch++;
		}
		cout<<endl;
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(n-i);k++)
		{
			if(i%2!=0)
			{
				cout<<no<<" ";
			}
		    else
		    {
		    	cout<<ch<<" ";
		    	
			}
		}
		if(i%2!=0)
		{
			no++;
		}
		else
		{
			ch++;
		}
		cout<<endl;
	}
	
}
