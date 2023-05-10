//fibonaccie series

#include<iostream>
using namespace std;
int fun()
{
	int i=0,j=1,k,m=3,n;
	
	cout<<"enter num:";
	cin>>n;
	
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
	fun();
}
