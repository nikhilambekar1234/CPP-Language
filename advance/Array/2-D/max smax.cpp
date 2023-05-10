//15-Find out max and second max element

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j,max=-32766,smax=-32767;
	
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
    		if(arr1[i][j]>max)
    		{
    			smax=max;
    			max=arr1[i][j];
			}
			else if(arr1[i][j]>smax && arr1[i][j]!=max)
    		{
    			smax=arr1[i][j];
			}
		}
	}
	cout<<"max ="<<max<<endl;
	cout<<"smax ="<<smax;
	
}
    
	
	
