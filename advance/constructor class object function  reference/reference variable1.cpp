//reference variable affect on other variable 
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	int &c=a;
	
	
	cout<<a<<endl;
	cout<<b<<endl;
	b++;
	cout<<c<<endl;
	
}
