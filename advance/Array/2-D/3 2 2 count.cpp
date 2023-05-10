//11-accept dimension arrray with 3,2,2 dimension
// and print the frequncy of given num present of array

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][2][2],i,j,k,n,count=0;
	
	cout<<"enter element:"<<endl;
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		for(k=0;k<2;k++)
    		{
    			cin>>arr1[i][j][k];
			}
    	
		}
	}
	cout<<"arr1\n";
	for(i=0;i<3;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		for(k=0;k<2;k++)
    		{
    			cout<<arr1[i][j][k]<<" ";
			}
    	
		}
		cout<<endl;
	}
	cout<<"enter element\n";
	cin>>n;
	for(i=0;i<3;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		for(k=0;k<2;k++)
    		{
    			if(arr1[i][j][k]==n)
    			count++;
			}
    	}
	}
	cout<<n<<" "<<count<<" times";
}
    
	
	
