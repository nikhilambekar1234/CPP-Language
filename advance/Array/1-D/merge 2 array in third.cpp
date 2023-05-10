//1. Write a Program to merge two array to third array.

#include<iostream>
using namespace std;
int main()
{
	int a1[10],a2[5],a3[15],i;
	
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
	cout<<"enter element in arr2:\n";
	for(i=0;i<5;i++)
	{
		cin>>a2[i];
	}
	cout<<"your arr2:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<a2[i]<<endl;
	}
	cout<<"your arr3:"<<endl;
	for(i=0;i<10;i++)
	{
		a3[i]=a1[i];
		a3[10+i]=a2[i];
	}
	for(i=0;i<15;i++)
	{
		cout<<a3[i]<<endl;
	}
}
