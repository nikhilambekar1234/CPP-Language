//9-accept no from user and make the addition of all num from 1-n.
//and check the result addition is even or odd.

#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	cout<<"sum = "<<sum<<endl;
	if(sum%2==0)
	{
		cout<<"even num";
	}
	else
	{
		cout<<"odd num";
	}
}
