//static function
#include<iostream>
using namespace std;
class demo
{
	public :
	void fun()
	{
		cout<<"demo fun"<<endl;
	}
	static	void gun()
	{
		cout<<"demo gun"<<endl;
	}
};
int main()
{
	demo::gun();
}
