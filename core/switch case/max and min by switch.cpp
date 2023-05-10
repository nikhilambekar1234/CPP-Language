//1.Write a C program to find maximum between two numbers using switch case.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"enter two num :\n";
	cin>>a>>b;
	
		switch(a>b)
	    {
		    case 1:
			cout<<"max = "<<a;
			break;
			
		    case 0:
		    cout<<"max = "<<b;
			break;							
    	}
}
