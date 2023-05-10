//33. Write a C++ program to search for a given element in an array using linear search. 

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,count=0;
	
	cout<<"enter element:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"enter num:"<<endl;
	cin>>n;
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		cout<<"search";
	}
	else
	{
		cout<<"not search";
	}
}
