//16-Find max and min

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j,max,min;
	
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
	max=arr1[0][0];
	min=arr1[0][0];
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(arr1[i][j]>max)
    		{
    			max=arr1[i][j];
			}
			else if(arr1[i][j]<min)
    		{
    			min=arr1[i][j];
			}
		}
	}
	cout<<"max ="<<max<<endl;
	cout<<"min ="<<min;
	
}
    
	
	
