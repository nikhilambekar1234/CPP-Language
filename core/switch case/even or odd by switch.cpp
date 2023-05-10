//1.	Write a C program to check whether a number is even or odd using switch case.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"enter  num :\n";
	cin>>a;
	
		switch(a%2==0)
	    {
		    case 1:
			cout<<"even = "<<a;
			break;
			
		    case 0:
		    cout<<"odd = "<<a;
			break;							
    	}
}
