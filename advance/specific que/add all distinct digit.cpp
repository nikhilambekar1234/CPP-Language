//3-accept no from user and make addition of all distinct digits present in the number
// and check addition is even or odd.

#include<iostream>
using namespace std;
int main()
{
	int n,rem,sum;
	
	cout<<"enter num:";
	cin>>n;
	
	while(n!=0)
	{
		rem=n%10;
		{
			sum+=rem;
		}
		n=n/10;
	}
	if(sum%2==0)
	{
		cout<<"even sum = "<<sum<<endl;
	}
	else
	{
		cout<<"odd sum = "<<sum;
	}
}
