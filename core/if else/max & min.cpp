//1-accept two num and print the max and min from it

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter two num:";
	cin>>a>>b;
	
	if(a>b)
	{
		cout<<"max = "<<a<<endl;
		cout<<"min = "<<b<<endl;
	}
	else
	{
		cout<<"min = "<<a<<endl;
		cout<<"max = "<<b<<endl;
	}
}
