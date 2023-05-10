//Write a program to compare two dates entered by user.
// Make a structure named Date to store the elements day, month and year to store the dates. 
//If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

#include<iostream>
using namespace std;
struct date
{
	int d,m,yr;
};
int main()
{
	struct date d1,d2;
	
	cout<<"enter first date:\n";
	cin>>d1.d>>d1.m>>d1.yr;
	cout<<"enter second date:\n";
	cin>>d2.d>>d2.m>>d2.yr;
	
	if(d1.d==d2.d&&d1.m==d2.m&&d1.yr==d2.yr)
	{
		cout<<"equal date";
	}
	else
	{
		cout<<"not equal date";
	}
}

