//assending

#include<iostream>
using namespace std;
int fun(int a,int b,int c)
{
	int i,temp=0;

  for(i=1;i<=10;i++)
  {
  	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	else if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
  }	
  cout<<a<<endl<<b<<endl<<c<<endl;
}
int main()
{
	int a,b,c;
	
	cout<<"enter num:";
	cin>>a>>b>>c;
	fun(a,b,c);
}
