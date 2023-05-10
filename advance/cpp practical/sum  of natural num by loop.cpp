//35. Write a C++ program to find the sum of natural numbers using for loop. 

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
	cout<<" sum  = "<<sum<<endl;
}
