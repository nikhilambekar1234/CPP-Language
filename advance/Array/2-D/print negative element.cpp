//1. Write a Program to print all negative elements and count in an array.

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j,count=0;
	
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
	cout<<"negative element:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr1[i][j]<0)
			{
				count++;
				cout<<arr1[i][j]<<" ";
			}
			
		}
		cout<<endl;
	}
	cout<<"total = "<<count;
}
