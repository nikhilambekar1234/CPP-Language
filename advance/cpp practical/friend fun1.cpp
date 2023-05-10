////25. Write a C++ program to demonstrate the usage of friend function in a class.

#include<iostream>
using namespace std;
class add
{
	int a=7;
    
    public :
    	friend void fun(add);
};
void fun(add m)
{
	m.a+=10;
	cout<<"sum = "<<m.a;
}
int main()
{
	add p;
	fun(p);
}
