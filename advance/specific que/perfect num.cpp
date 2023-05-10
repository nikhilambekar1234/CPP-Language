//4-perfect no.

#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
		
	}
	cout<<"sum = "<<sum<<endl;
	if(sum==n)
	{
		cout<<"perfect num";
	}
	else
	{
		cout<<"not perfect num";
	}
}
