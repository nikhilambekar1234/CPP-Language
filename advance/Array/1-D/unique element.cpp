#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,j,flag=0;
	cout<<"enter element";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
    cout<<"unique element";
	
	for(i=0;i<10;i++)
	{
		flag=0;
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j]&& arr[i]!=0)
			{
				arr[j]=0;
			   flag=1;
			}
		}
		if(flag==0 && arr[i]!=0 )
    	{
	     	cout<<arr[i]<<" ";
	    }
	}
	
}
