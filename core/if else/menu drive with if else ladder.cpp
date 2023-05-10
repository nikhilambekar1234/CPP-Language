//3-accept two num and create menu for arithmetic operation like 1=addition,2-sub,3-mult,4-div,5-mode.

#include<iostream>
using namespace std;
int main()
{
	int a,b,op;
    float div;
	
	cout<<"enter two num:";
	cin>>a>>b;
	cout<<"enter\n1=add\n2-sub\n3-mult\n4-div\n5-mode\n";
	cin>>op;
	
	if(op==1)
	{
		cout<<"add = "<<a+b;
	}
	else if(op==2)
	{
		cout<<"sub = "<<a-b;
	}
	else if(op==3)
	{
		cout<<"mult = "<<a*b;
	}
	else if(op==4)
	{
		div=(float)a/b;
		cout<<"div = "<<div;
	}
	else if(op==5)
	{
		cout<<"mode = "<<a%b;
	}
	else
	{
		cout<<"invalid";
	}
}
