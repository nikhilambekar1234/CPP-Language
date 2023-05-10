//2-accept no from user and make addition of all odd no even no digits present in the given no
// and print the add  seperately.

#include<iostream>
using namespace std;
int main()
{
	int n,even=0,odd=0,rem;
	
	cout<<"enter num:";
	cin>>n;
	
	while(n!=0)
	{
		rem=n%10;
		if(rem%2==0)
		{
			even+=rem;
		}
		else
		{
			odd+=rem;
		}
		n=n/10;
	}
	cout<<"even = "<<even<<endl;
	cout<<"odd = "<<odd;
}
