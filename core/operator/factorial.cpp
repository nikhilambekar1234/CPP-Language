//2-accept no from user and calculate the factorial of number using goto.

#include<iostream>
using namespace std;
int main()
{
	int i=1,j=1,n;
	
	cout<<"enter num:";
	cin>>n;
	
	kdn :
	i=i*j;
	
	j++;
	if(j<=n)
	{
		goto kdn;
	}
	
	cout<<"factorial = "<<i;
}
