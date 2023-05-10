//max/min num

#include<iostream>
using namespace std;
int fun(int a, int b)
{
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
	int a,b;
	
	cout<<"enter num";
	cin>>a>>b;
	
	fun(a,b);
}
