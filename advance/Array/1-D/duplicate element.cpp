//1. Write a Program to count total number of duplicate elements in an array.

#include<iostream>
using namespace std;
int main()
{
	int arr[10],arr1[10],i,j,count=0,temp=0;
	cout<<"enter arr\n";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}

	printf("duplicate element\n");
	for(i=0;i<10;i++)
	{
		temp=arr[i];
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j] && arr[i]!=0)
			{
				arr[i]=0;
				count++;
				cout<<temp<<endl;
			   
			}
			else if(temp==arr[j])
			{
				arr[j]=0;
			}
		}
		
	}
	cout<<"number of duplicate element = "<<count;
	
}
