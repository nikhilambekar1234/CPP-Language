//11. Write a C++ program to find the GCD of two numbers. 

#include<iostream>
using namespace std;
int main()
{
	int a,b,i,gcd,lcm;
	cout<<"enter two num";
    cin>>a>>b;
	
//	for(i=1;i<=a,i<=b;i++)
	//for(i=1;i<=a/2;i++)
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	
	}
	lcm=(a*b)/gcd;
	cout<<"gcd = "<<gcd<<endl;
	cout<<"lcm = "<<lcm;
}
