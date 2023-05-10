//14-Find out min and second minimum element

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j,min=32766,smin=32767;
	
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
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(arr1[i][j]<min)
    		{
    			smin=min;
    			min=arr1[i][j];
			}
			else if(arr1[i][j]<smin && arr1[i][j]!=min)
    		{
    			smin=arr1[i][j];
			}
		}
	}
	cout<<"min ="<<min<<endl;
	cout<<"smin ="<<smin;
	
}
    
	
	
