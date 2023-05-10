//1. Write a Program to find reverse of an array.

#include<iostream>
using namespace std;
int main()
{
	int a1[10],i,half,temp;
	half=10/2;
	
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
	cout<<"reverse arr1:\n";
	for(i=0;i<half;i++)
	{
		temp=a1[i];
		a1[i]=a1[10-i-1];
		a1[10-i-1]=temp;
	}
	for(i=0;i<10;i++)
	{
		cout<<a1[i]<<endl;
	}
	
}
