#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<a+b<<endl;
}
void add(double a,double b)
{
	cout<<a+b<<endl;
}
void add(double a,int b)
{
	cout<<a+b<<endl;
}
void add(int a,double b)
{
	cout<<a+b<<endl;
}
void add(int a,int b,int c)
{
	cout<<a+b+c<<endl;
}
int main()
{
	add(2,3);
	add(2.5,3.5);
	add(2,3);
	add(2.5,3);
	add(3,2.5);
	add(2,3,4);
}
