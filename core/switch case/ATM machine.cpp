//7-create the code for ATM system enter pin (valid/invalid) check balance, withdrawal, credit, change pin

#include<iostream>
using namespace std;
int main()
{
	int PIN=1234,pin,balance=7000,op,amount;
	
	kdn :
	cout<<"enter pin:";
	cin>>pin;
	
	if(pin!=PIN)
	{
		cout<<"invalid pin\nTry again\n Thank you\n";
	}
	else
	{
        cout<<"welcome\nwhat can i help you\n";
        cout<<"enter\n1-check balance\n2-withdraw\n3-credit\n4-change pin\n";
	    cin>>op;
	    
	    switch(op)
	        {
	        	case 1:
	        		cout<<"your balance is = "<<balance;
	        		break;
	        		
	        	case 2:
				    cout<<"enter amount to withdraw:";
					cin>>amount;
					balance-=amount;
					cout<<"your withdraw successfully done"<<endl;
					break;
					
				case 3:
				    cout<<"enter amount to credit:";
					cin>>amount;
					balance+=amount;
					cout<<"your credit successfully done"<<endl;
					break;
					
				case 4:
				    cout<<"enter new pin to change:";
					cin>>pin;
					PIN=pin;
					cout<<"your new pin successfully done"<<endl;
					cout<<"your new pin is = "<<PIN<<endl;
					{
						goto kdn;
					}
					break;
					
				default :
				    cout<<"invalid op\n";	
							
			}
			cout<<"enter\n1-check balance\n2-exit\n";
			cin>>op;
			
			if(op==1)
			{
				cout<<"your balance is = "<<balance<<endl;
				cout<<"thank you";
			}
			else
			{
				cout<<"thank you";
			}
	}
}
