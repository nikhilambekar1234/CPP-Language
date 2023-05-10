//10-accept no from user and make addition of all no from 1-n and check the result addition is even or odd.

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
	cout<<"sum = "<<sum<<endl;
	if(sum%2==0)
	{
		cout<<"even sum";
	}
	else
	{
		cout<<"odd sum";
	}
}
