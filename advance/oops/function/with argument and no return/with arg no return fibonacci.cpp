//fibonaccie series

#include<iostream>
using namespace std;
int fun(int n)
{
	int i=0,j=1,k,m=3;
	
	cout<<i<<endl;
	cout<<j<<endl;
	
	for(m=3;m<=n;m++)
	{
		k=i+j;
		cout<<k<<endl;
		i=j;
		j=k;
	}
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n);
}
