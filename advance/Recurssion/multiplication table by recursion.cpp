//6-accept no and print the multiplication table of given no.

#include<iostream>
using namespace std;
int fun(int n,int i)
{
    if(i<=10)//base condition
    {
    	cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	return fun(n,i+1);
  
}
int main()
{
	int n,i=1;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n,i);
	
}
