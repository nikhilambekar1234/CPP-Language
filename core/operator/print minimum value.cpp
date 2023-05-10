//2-accept two no and print min num from it.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter two num:";
	cin>>a>>b;
	
	if(a>b)
	{
		cout<<"min = "<<b;
	}
	else
	{
		cout<<"min = "<<a;
	}
}
