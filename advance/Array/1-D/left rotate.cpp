/*1. Write a Program to left rotate an array.
Array is 1 2 3 4 5 6
left rotate by 2
Output is : 3 4 5 6 1 2 */

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,k,j=0,temp;
	
	cout<<"enter times of rotation";
	cin>>k;
	
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
	cout<<"left rotate element:\n";
	for(j=1;j<=k;j++)
	{
		temp=a[0];
		for(i=0;i<9;i++)
	    {
		   a[i]=a[i+1];
		   
     	}
     	a[i]=temp;
    }
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
}
