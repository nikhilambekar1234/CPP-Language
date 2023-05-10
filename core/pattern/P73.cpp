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
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			if(i%2!=0)
			{
				cout<<ch<<" ";
			    ch++;
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
