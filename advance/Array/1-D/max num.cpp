//11-print the gretest no from array

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,max=0;
	
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
	cout<<"max num\n";
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
    cout<<max<<endl;	
}
