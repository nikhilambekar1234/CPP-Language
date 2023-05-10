//1.WAP to check whether a number is positive, negative or zero using switch case.

#include<iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"enter num :\n";
	cin>>a;
	
		switch(a>0)
	    {
		    case 1:
			cout<<"positive = "<<a;
			break;
			
		    case 0:
		    	switch(a<0)
		    	{
		    		case 1:
		    		cout<<"negative = "<<a;
			        break;
			        
			        case 0:
		    		cout<<"entered  = "<<a;
			        break;
			    }					
    	}
}
