//1. Reverse array.

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j;
	
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
	cout<<"reverse arr1:\n";
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
}
