//5-fibonacci series

#include<iostream>
using namespace std;
int fun(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
	    return fun(n-1)+fun(n-2);	
	}
	
}
int main()
{
	int i, n,res;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		res=fun(i);
	    cout<<res<<endl;
	}
	
}
