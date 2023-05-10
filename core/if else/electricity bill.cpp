//1.WAP to input electricity unit charges
// and calculate total electricity bill according to the given condition:
/*For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	float bill,charge;
	
	cout<<"Enter electricity unit:\n";
	cin>>n;
	
	if(n<=50)
	{
		bill=0.50*n;
	}
	else if(n<=150)
	{
		bill=25+(0.75*(n-50));
	}
	else if(n<=250)
	{
		bill=100+(1.20*(n-150));
	}
	else if(n>250)
	{
		bill=220+(1.50*(n-250));
	}
	
	charge=0.20*bill;
	
	cout<<"total bill = "<<charge+bill;

}


