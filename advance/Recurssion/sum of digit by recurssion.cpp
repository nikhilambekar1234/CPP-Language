//4-wap to add all digit present in number using recursion 12345

#include<iostream>
using namespace std;
int fun(int n)
{
  int rem;
  static int sum=0;
  if(n==0)//base condition
  {
  	return sum;
  }
  else
  {
  	rem=n%10;
  	sum+=rem;
  	return fun(n/10);//recursive call
  }
  
}
int main()
{
	int sum=0,n;
	
	cout<<"enter num:";
	cin>>n;
	
	sum=fun(n);
	cout<<"sum of digit = "<<sum<<endl;
}
