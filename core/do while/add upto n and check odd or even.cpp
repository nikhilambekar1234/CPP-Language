//10-accept no from user and make addition of all no from 1-n
// and check the result addition is even or odd.

#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	
	cout<<"enter num:";
	cin>>n;
	
	do
	{
		sum+=i;
		i++;
	}
	while(i<=n);
	cout<<"sum = "<<sum<<endl;
	if(sum%2==0)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
}
