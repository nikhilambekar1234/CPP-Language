//Write a program in C to find the largest element using Dynamic Memory 

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,temp,i,max;
	int *size=NULL;
	
	cout<<"enter num\n";
	cin>>n;
	
	size=(int*)calloc(n,sizeof(int));
	cout<<"enter element\n";
	for(i=0;i<n;i++)
	{
		cin>>*(size+i);
	}
	max=*(size+0);
	for(i=0;i<n;i++)
	{
		if(*(size+i)>max)
		{
			max=*(size+i);
		}
	}
	cout<<"max = "<<max;
}
