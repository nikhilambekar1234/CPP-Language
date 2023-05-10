//1. Write a Program to count total number of even and odd elements in an array.

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j,even=0,odd=0;
	
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
	cout<<" element:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr1[i][j]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
	}
	cout<<"even = "<<even<<endl;
	cout<<"odd = "<<odd;
}
