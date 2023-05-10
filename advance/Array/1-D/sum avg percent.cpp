//13-accept array with 10 element and print the avg and percent.

#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	float sum=0,avg,percent;
	
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
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
    cout<<"sum ="<<sum<<endl;
	cout<<"avg ="<<(sum/10)<<endl;
	percent=(float)(sum/1000)*100;
	cout<<"percent ="<<percent<<endl;
	
}
