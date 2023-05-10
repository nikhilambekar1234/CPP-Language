//7. Write a Program to sort array elements in ascending or descending order.

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j,temp,k=0,l=0;
	
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
	cout<<"assending\n";
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		for(k=0;k<3;k++)
    		{
    			for(l=0;l<3;l++)
    			{
    				if(arr1[i][j]<arr1[k][l])
    				{
    					temp=arr1[i][j];
    					arr1[i][j]=arr1[k][l];
    					arr1[k][l]=temp;
					}
				}
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}

	
}
    
	
	
