//14-Assending element

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,temp;
	
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
	cout<<"assending order:"<<endl;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
     	{
     		if(a[i]>a[j])
     		{
     		   	temp=a[i];
     		    a[i]=a[j];
     		    a[j]=temp;
			}
     	} 
	    cout<<a[i]<<endl;
	}
	
	
	
	
}
