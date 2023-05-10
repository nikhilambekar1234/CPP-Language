//36. Write a C++ program to create a simple class named Account
// and write methods to deposit and withdraw amount from the account. 

#include<iostream>
using namespace std;
class account
{
	private :
		
	string name;
	int ac;
	float balance,amount;
	
	public :
		void setdata()
		{
			cout<<"enter name:\n";
			cin >>name;
			cout<<"enter a/c num\n";
			cin>>ac;
			cout<<"enter balance\n";
			cin>>balance;
		}
		void showdata()
		{
			cout<<"name = "<<name<<endl;
			cout<<"a/c num = "<<ac<<endl;
			cout<<"balance = "<<balance<<endl;
		}
		void deposit()
		{
			float amount;
			cout<<"enter amount\n";
			cin>>amount;
			balance+=amount;
			cout<<"balance = "<<balance<<endl;
		}
		void withdraw()
		{
			float amount;
			cout<<"enter amount\n";
			cin>>amount;
			balance-=amount;
			cout<<"balance = "<<balance<<endl;
		}
};
int main()
{
	account s;
	int ch;
	
	while(1)
	{
		cout<<"enter choice\n1-setdata\n2-showdata\n3-deposit\n4-withdraw\n5-cancle\n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			s.setdata();
			break;
			
		case 2:
			s.showdata();
			break;
			
		case 3:
			s.deposit();
			break;
			
		case 4:
			s.withdraw();
			break;	
			
		case 5:
			exit(0);
			break;	
				
		default :
		    cout<<"invalid choice";			
	}
	}
	
}
