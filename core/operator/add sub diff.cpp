//2-accept two number from user and make addition and subtraction both
//and print the difference between  addition and subtraction.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter two num:";
	cin>>a>>b;
	
	cout<<"add = "<<a+b<<endl;
	cout<<"sub = "<<a-b<<endl;
	cout<<"diff = "<<((a+b)-(a-b));
	
	
}
