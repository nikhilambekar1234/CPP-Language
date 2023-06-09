/*10.A boy has his money deposited $1000, $1500 and $2000 in banks-Bank A, Bank B and Bank C respectively.
 We have to print the money deposited by him in a particular bank.
Create a class 'Bank' with a function 'getBalance' which returns 0. Make its three subclasses 
named 'BankA', 'BankB' and 'BankC' with a function with the same name 'getBalance' which returns the amount deposited 
in that particular bank. Call the function 'getBalance' by the object of each of the three banks. */

#include<iostream>
using namespace std;
class Bank
{
	public:
		int getBalance()
		{
			return 0;
		}
};
class BankA:public Bank
{
	int amount;
	public:
		BankA(int a)
		{
			amount=a;
		}
		int getBalance()
		{
			return amount;
		}
};
class BankB:public Bank
{
	int amount;
	public:
		BankB(int a)
		{
			amount=a;
		}
		int getBalance()
		{
			return amount;
		}
};
class BankC:public Bank
{
	int amount;
	public:
		BankC(int a)
		{
			amount=a;
		}
		int getBalance()
		{
			return amount;
		}
};
int main()
{

	BankA a(1000);
	BankB b(1500);
	BankC c(2000);
	Bank d;
	
	cout<<" Balance in bank A = "<<a.getBalance()<<endl;
	cout<<" Balance in bank B = "<<b.getBalance()<<endl;
	cout<<" Balance in bank C = "<<c.getBalance()<<endl;
	cout<<" Balance in bank  = "<<d.getBalance()<<endl;
}
