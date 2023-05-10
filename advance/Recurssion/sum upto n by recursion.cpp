//1-write a program to print sum of all odd element from 1-n
#include<iostream>
using namespace std;
int fun(int n)
{
  if(n==1)
  {
  	return 1;
  }
  else
  {
  	return n+fun(n-1);
  }
	
}
int main()
{
	int i=1,n,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	sum=fun(n);
	cout<<sum<<endl;
	
	
}
