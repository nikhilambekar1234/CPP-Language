//3-check the no is prime or not using recursion.

#include<iostream>
using namespace std;
int fun(int n,int i)
{
    if(i==1)
    {
    	return 1;
	}
	if(n%i==0)
	{
		return 0;
	}
	return fun(n,i-1);
}
int main()
{
	int i=1,n,res=0;
	
	cout<<"enter num:";
	cin>>n;
	if(n==0||n==1)
	{
		cout<<"not prime"<<endl;
		
	}
	
	res=fun(n,n/2);
	if(res==1)
	{
		cout<<"prime num"<<endl;
	}
	else
	{
		cout<<"not prime"<<endl;
	}
	
	
	
}
