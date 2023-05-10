//sort even odd element

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
	cout<<"even \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr1[i][j]%2==0)
			{
			   cout<<arr1[i][j]<<" ";	
			}
		}
	}
	cout<<"\n odd \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr1[i][j]%2!=0)
			{
			   cout<<arr1[i][j]<<" ";	
			}
		}
	}
}
