//1.	Write a C program to calculate profit or loss.

#include<iostream>
using namespace std;
int main()
{
	int sp,cp;
	
	cout<<"Enter sp and cp :";
	cin>>sp>>cp;
	
	if(sp>cp)
	{
		cout<<"profit = "<<sp-cp;
	}
	else if(cp>sp)
	{
		cout<<"loss = "<<cp-sp;
	}
	else
	{
		cout<<"no profi no loss";
	}
	
}
