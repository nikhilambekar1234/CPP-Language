//1. Write a Program to read and print elements of array. - using recursion.

#include<iostream>
using namespace std;
int fun(int a[],int i,int n)
{
	if(i<n)
	{
		cout<<a[i]<<endl;
		fun(a,i+1,n);
	}
}
int main()
{
	int a[10],i;
	
	cout<<"enter element:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"your arr\n";
	fun(a,0,10);
}
