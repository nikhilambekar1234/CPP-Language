/*Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it.
 Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50.
  Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.*/

#include<iostream>
using namespace std;
class AddAmount
{
	int amount;
	public:
		AddAmount()
		{
			amount=50;
		}
		AddAmount(int m)
		{
			amount=50;
			 amount+=m;
		}
		void balance()
		{
			cout<<"Amount = "<<amount<<endl;
		}
	
};
int main()
{
	AddAmount bal1;
	AddAmount bal2(100);
	
	bal1.balance();
	bal2.balance();
}

