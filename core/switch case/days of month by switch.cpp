//5-accept num of month and print how many days in month switch case

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter number of month:";
	cin>>n;
	
	switch(n)
	{
		case 1:
		case 3:
	    case 5:
        case 7:
		case 8:
		case 10:
		case 12:
		       cout<<"31 days";
			   break;	
		
		
		case 4:	
		case 6:
		case 9:	
		case 11:
			    cout<<"30 days";
			    break;
			
			
		case 2:
		       cout<<"28/29 days";
			   break;
			   
		default :
		       cout<<"invalid";
			   break;	   
	}
}
