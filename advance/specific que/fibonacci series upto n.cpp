//5-print the fibonacci series 

#include<iostream>
using namespace std;
int main()
{
	int i=0,j=1,k,m=3,n;
	
	cout<<"enter num:";
	cin>>n;
	
	cout<<i<<endl;
	cout<<j<<endl;
	
	while(m<=n)
	{
		k=i+j;
		cout<<k<<endl;
		i=j;
		j=k;
		m++;
	}
}
