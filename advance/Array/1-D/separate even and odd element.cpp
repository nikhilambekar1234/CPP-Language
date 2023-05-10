//7. Write a Program to put even and odd elements of array in two separate array.

#include<iostream>
using namespace std;
int main()
{
	int a1[10],even[10],odd[10],i,j=0,k=0;
	
	cout<<"enter element in arr1:\n";
	for(i=0;i<10;i++)
	{
		cin>>a1[i];
	}
	cout<<"your arr1:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a1[i]<<endl;
	}
	for(i=0;i<10;i++)
	{
		if(a1[i]%2==0)
		{
			even[j]=a1[i];
			j++;
		}
		else
		{
			odd[k]=a1[i];
			k++;
		}
		
	}
	cout<<"even element:\n";
	for(i=0;i<j;i++)
	{
		cout<<even[i]<<endl;
	}
	cout<<"odd element:\n";
	for(i=0;i<k;i++)
	{
		cout<<odd[i]<<endl;
	}
	
}
