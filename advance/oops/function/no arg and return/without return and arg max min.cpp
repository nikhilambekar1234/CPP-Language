//max/min num

#include<iostream>
using namespace std;
int fun()
{
	int a,b;
	
	cout<<"enter num";
	cin>>a>>b;
	
	if(a>b)
	{
		cout<<"max = "<<a<<endl<<"min = "<<b;
	}
	else
	{
		cout<<"max = "<<b<<endl<<"min = "<<a;
	}
}
int main()
{
	fun();
}
