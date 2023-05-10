//5-Make addition of even & odd num separately and difference between them.

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,even=0,odd=0;
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
	for(i=0;i<n;i++)
	{
		if(*(size+i)%2==0)
		{
			even+=*(size+i);
		}
		else
		{
			odd+=*(size+i);
		}
	}
	cout<<"even = "<<even<<endl;
	cout<<"odd = "<<odd<<endl;
	if(even>odd)
	{
		cout<<"diff = "<<even-odd<<endl;
	}
	else
	{
		cout<<"diff = "<<odd-even<<endl;
	}
	
	
}
