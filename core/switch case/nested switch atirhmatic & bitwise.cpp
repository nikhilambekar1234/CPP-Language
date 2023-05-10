//8-create calculate for both arithmetic operator & bitwise operator use nested switch statement.

#include<iostream>
using namespace std;
int main()
{
	int op,op1,a,b;
	float div;
	
	cout<<"enter two num:";
	cin>>a>>b;
	
	cout<<"enter\n1=arithmatic opertor\n2=bitwise operator\n";
	cin>>op;
	
	switch(op)
	{
		case 1 :
			cout<<"enter\n1-add\n2-sub\n3-mult\n4-div\n5-mode\n";
			cin>>op1;
			
			switch(op1)
			{
				case 1:
					cout<<"add ="<<a+b;
					break;
					
				case 2:
				    cout<<"sub = "<<a-b;
					break;
					
				case 3:
				    cout<<"mult = "<<a*b;
					break;
					
				case 4:
					div=(float)a/b;
				    cout<<"div = "<<div;
					break;
					
				case 5:
				    cout<<"mode = "<<a%b;
					break;
					
		    	default :
					cout<<"invalid";
										
			}
			break;
		case 2:
			cout<<"enter\n1-and\n2-or\n3-xor\n4-left shift\n5-right shift\n6-tilde\n";
			cin>>op1;
				
			switch(op1)
			{
					
				case 1:
					cout<<"and = "<<(a&b);
					break;
					
				case 2:
				    cout<<"or = "<<(a|b);
					break;
					
				case 3:
				    cout<<"xor = "<<(a^b);
					break;
					
				case 4:
				    cout<<"left shift = "<<(a<<b);
					break;
					
				case 5:
				    cout<<"right shift = "<<(a>>b);
					break;
					
				case 6:
				    cout<<"tilde = "<<(~a)<<(~b);
					break;
					
				default :
				    cout<<"invalid op";	
	    	}
	    	break;
	    	
	    	default :
	    		cout<<"invalid op";
	}
}
