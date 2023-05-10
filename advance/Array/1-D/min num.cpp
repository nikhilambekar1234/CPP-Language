//10-print the minimum no from array

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,min=0;
	
	cout<<"enter element:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"your data:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"min num\n";
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
    cout<<min<<endl;	
}
