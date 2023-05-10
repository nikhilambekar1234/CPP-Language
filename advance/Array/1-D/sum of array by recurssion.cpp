//1. Write a Program to find sum of all array elements. - using recursion.


#include<iostream>
using namespace std;
int fun(int a[],int i,int n)
{
	static int sum=0;
	if(i<n)
	{
	    sum+=a[i];
		return fun(a,i+1,n);
	}
	else
	{
		cout<<"sum = "<<sum<<endl;
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
