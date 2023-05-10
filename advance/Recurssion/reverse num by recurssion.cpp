//2-wap to find reverse of any num using recurssion

#include<iostream>
using namespace std;
int fun(int n)
{
  int rem;
  static int rev=0;
  if(n==0)
  {
  	return rev;
  }
  else
  {
  	rem=n%10;
  	rev=rev*10+rem;
  	return fun(n/10);
  }
  
}
int main()
{
	int rev=0,n,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	rev=fun(n);
	cout<<rev<<endl;
}
