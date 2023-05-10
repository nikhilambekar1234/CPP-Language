//1. Write a Program to copy all elements from an array to another array.

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],arr2[3][3],i,j,even=0,odd=0;
	
	cout<<"enter element:"<<endl;
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cin>>arr1[i][j];
		}
	}
	cout<<"yout arr1:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<" arr2:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr2[i][j]=arr1[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
}
