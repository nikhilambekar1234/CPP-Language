//dynamic memory size with new key and free with delete
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
