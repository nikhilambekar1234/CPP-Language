//factorial series

#include<iostream>
using namespace std;
int fun()
{
	int i,j=1,n,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		j=j*i;
	}
	sum+=j;
	return sum;
}
int main()
{
	int sum;
	sum=fun();
	cout<<"factorial = "<<sum;
}
