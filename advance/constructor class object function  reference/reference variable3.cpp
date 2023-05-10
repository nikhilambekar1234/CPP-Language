//reference variable
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int x=20;
	int &b=a;
	int &c=a;
	int &c=x;
	
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	
}
