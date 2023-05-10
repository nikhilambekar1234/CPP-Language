//12-calculate the difference between most lowest and most highest num in array

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,min=0,max=0;
	
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
	min=a[0];
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		else if(a[i]>max)
		{
			max=a[i];
		}
	}
    cout<<"min = "<<min<<endl;
	cout<<"max ="<<max<<endl;
	cout<<"diff = "<<max-min<<endl;	
}
