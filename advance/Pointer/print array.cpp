//7. Write a program in C to store n elements in an array and print the elements using pointer

#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	int *ptr=a;
	
	cout<<"enter element:\n";
	for(i=0;i<10;i++)
	{
		cin>>*(ptr+i);
	}
	cout <<"your arr:\n";
	for(i=0;i<10;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
}
