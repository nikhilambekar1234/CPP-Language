//4-accept two matrix from user make subtraction
// and check the result matrix is identity matrix or not

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3],i,j,c1=0,c2=0;
	
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
	cout<<"enter element:"<<endl;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cin>>arr2[i][j];
		}
	}
	cout<<"yout arr2:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"subtraction of array:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr3[i][j]=arr1[i][j]-arr2[i][j];
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j && arr3[i][j]==1)
			{
				c1++;
			}
			else if(i!=j && arr3[i][j]==0)
			{
				c2++;
			}
		}
	}
	cout<<"sum ="<<c1<<endl;
	cout<<"sum ="<<c2<<endl;
	if(c1==3 && c2==6)
	{
	   cout<<"identity";	
	}
	else
	{
	   cout<<" not identity";	
	}	
}
    
	
	
