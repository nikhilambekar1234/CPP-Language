//even/odd

#include<iostream>
using namespace std;
int fun()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	if(n%2==0)
	{
	   return 1;
    }
    else
    {
    	return 0;
	}
}
int main()
{
	int res;
	res=fun();
	
	if(res==1)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
}
