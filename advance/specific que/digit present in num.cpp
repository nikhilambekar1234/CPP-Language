//1-accept no from user and print the count of digit present in the number .

#include<iostream>
using namespace std;
int main()
{
	int n,rem,count=0;
	
	cout<<"enter num:";
	cin>>n;
	
	while(n!=0)
	{
		rem=n%10;
		{
			count++;
		}
		n=n/10;
	}
	cout<<"digit present in num = "<<count;
}
