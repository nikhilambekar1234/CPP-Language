//4-print all amstrong num

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int m,i,j,count=0,mult,rem,temp,n,sum;
	int *size=NULL;
	
	cout<<"enter num:\n";
	cin>>m;
	
	size=(int*)calloc(m,sizeof(int));
	
	if(size==NULL)
	{
		cout<<"memory not allocated\n";
	}
	
	cout<<"enter arr:\n";
	for(i=0;i<m;i++)
	{
		cin>>*(size+i);
	}
	cout<<"your data:\n";
	for(i=0;i<m;i++)
	{
		cout<<*(size+i)<<endl;
	}
	cout<<"Amstrong num\n";
	for(i=0;i<m;i++)
	{
		sum=0;
		n=*(size+i);
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			mult=rem*rem*rem;
			sum+=mult;
			n=n/10;
		}
		if(temp==sum)
		{
			cout<<temp<<endl;
		}
	}
}
