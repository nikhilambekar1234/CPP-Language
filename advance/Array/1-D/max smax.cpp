//17-Find out maximum and second maximum element

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,max=-32767,smax=-32768;
	
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
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]>smax && a[i]!=max)
		{
			smax=a[i];
		}
	}
    cout<<"max = "<<max<<endl;
	cout<<"smax = "<<smax<<endl;	
}
