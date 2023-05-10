//factorial series

#include<iostream>
using namespace std;
int fun(int n)
{
	int i,j=1,sum=0;
	
	for(i=1;i<=n;i++)
	{
		j=j*i;
	}
	sum+=j;
	cout<<"factorial = "<<sum;
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n);
}
