//1.	Write a C program to print day of week name using switch case.

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter num of day:\n";
	cin>>n;
	
	switch(n)
	{
		case 1:
			cout<<"sunday";
			break;
			
		case 2:
		    cout<<"monday";
			break;
			
		case 3:
		    cout<<"tuesday";
			break;
			
		case 4:
		    cout<<"wendsday";
			break;
			
		case 5:
		    cout<<"thersday";
			break;
			
		case 6:
		    cout<<"friday";
			break;
			
		case 7:
		    cout<<"saturday";
			break;
			
		default :
		    cout<<"invalid op";
			break;							
	}
}
