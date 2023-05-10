//3-calculate the difference between most highest and most lowest num present in array in positive array.

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,j,max=0,min=0;
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
	min=*(size+0);
	max=*(size+0);
	for(i=0;i<n;i++)
	{
		if(*(size+i)<min)
		{
			min=*(size+i);
		}
		else if(*(size+i)>max)
		{
			max=*(size+i);
		}
	}
    cout<<"min = "<<min<<endl;
	cout<<"max ="<<max<<endl;
	cout<<"diff = "<<max-min<<endl;	
}
