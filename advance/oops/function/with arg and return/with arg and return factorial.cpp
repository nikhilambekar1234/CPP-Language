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
	return sum;
}
int main()
{
	int i,j=1,n,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	sum=fun(n);
	cout<<"factorial = "<<sum;
}
