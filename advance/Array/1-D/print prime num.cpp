//2-print all prime no

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,count=0,j,n;
	
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
	cout<<"prime num\n";
	for(i=0;i<10;i++)
	{
		count=0;
		n=a[i];
		for(j=1;j<=n;j++)
		{
		    if(n%j==0)
		    {
		    	count++;
		    }	
		}
		if(count==2)
    	{
	    	cout<<n<<endl;
    	}
	}
}
