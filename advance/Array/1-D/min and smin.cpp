//16-Find out minimum and second minimum element

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,min=32767,smin=32768;
	
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
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			smin=min;
			min=a[i];
		}
		else if(a[i]<smin && a[i]!=min)
		{
			smin=a[i];
		}
	}
    cout<<"min = "<<min<<endl;
	cout<<"smin = "<<smin<<endl;	
}
