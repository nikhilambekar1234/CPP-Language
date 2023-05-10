//1.WAP to input basic salary of an employee 
//and calculate its Gross salary according to following:
/*Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include<iostream>
using namespace std;
int main()
{
	int bs,gs;
	float hra,da;
	
	cout<<"Enter num:";
	cin>>bs;
	
	if(bs<=10000)
	{
		hra=0.20*bs;
		da=0.80*bs;
		cout<<"gs = "<<bs+hra+da;
	}
	else if(bs<=20000)
	{
		hra=0.25*bs;
		da=0.90*bs;
		cout<<"gs = "<<bs+hra+da;
	}
	else if(bs>20000)
	{
		hra=0.30*bs;
		da=0.95*bs;
		cout<<"gs = "<<bs+hra+da;
	}
}

