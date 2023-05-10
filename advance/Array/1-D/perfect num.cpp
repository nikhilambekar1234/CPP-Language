//9-perfect no

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,sum,j;
	
	cout<<"enter element:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"your data:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"perfect num\n";
	for(i=0;i<10;i++)
	{
		sum=0;
		n=a[i];
		for(j=1;j<n;j++)
		{
			if(n%j==0)
			{
				sum+=j;
			}
		}
		if(n==sum)
		{
		    cout<<n<<endl;
		}
	}
}
