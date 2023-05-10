//9-accept no from user and make the addition of all num from 1-n.

#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"sum = "<<sum;
}
