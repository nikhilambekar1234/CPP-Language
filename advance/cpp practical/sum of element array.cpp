//6-make addition of all elements and check the addition is palindrome or not
//47. Write a C++ program to find the sum of elements in a given array. 
#include<iostream>
using namespace std;
int main()
{
	int a[10],i,sum=0;
	
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
	cout<<"addition\n";
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	cout<<"sum = "<<sum<<endl;
	
}
