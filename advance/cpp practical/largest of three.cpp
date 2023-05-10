//48. Write a C++ program to find the largest of 3 numbers

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"enter three num:\n";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
		cout<<"largest = "<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"largest = "<<b;
	}
	else
	{
		cout<<"largest = "<<c;
	}
}
