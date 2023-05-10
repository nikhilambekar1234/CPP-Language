//37. Write a C++ program to demonstrate dynamic memory allocation in c++. 
#include<iostream>
using namespace std;
int main()
{
	int size;
	cout <<"enter size\n";
	cin>>size;
	
	int *ptr=new int [size];
	cout<<"enter data\n";
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	cout<<"your data\n";
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
	delete ptr;
	
}





