//1-print all prime num from given num array which are allocated by dynamic memory allocation

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,j,count=0;
	int *size=NULL;
	
	cout<<"enter num:\n";
	cin>>n;
	
	size=(int*)calloc(n,sizeof(int));
	
	if(size==NULL)
	{
		cout<<"memory not allocated\n";
	}
	
	cout<<"enter arr:\n";
	for(i=0;i<n;i++)
	{
		cin>>*(size+i);
	}
	cout<<"your data:\n";
	for(i=0;i<n;i++)
	{
		cout<<*(size+i)<<endl;
	}
	cout<<"prime num:\n";
	for(i=0;i<10;i++)
	{
		count=0;
		n=*(size+i);
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
