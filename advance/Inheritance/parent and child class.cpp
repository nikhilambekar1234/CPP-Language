/*1.Create a class with a function that prints "This is parent class" and its subclass with another function
 that prints"This is child class". Now, create an object for each class and call
1 - function of the parent class by the object of the parent class
2 - function of the child class by the object of the child class
3 - function of the parent class by the object of the child class   */

#include<iostream>
using namespace std;
class Parent
{
	public:
		void fun()
		{
			cout<<"This is parent class"<<endl;
		}
};
class Child:public Parent
{
	public:
		void gun()
		{
			cout<<"This is child class"<<endl;
		}
};
int main()
{
	Parent p;
	p.fun();
	
	cout<<"----------------------------------------------------------------------------"<<endl;
	
	Child c;
	c.fun();
	c.gun();
	
}

