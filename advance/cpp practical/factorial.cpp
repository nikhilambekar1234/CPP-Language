
//14. Write a C++ program to find the factorial of a given number. 
#include<iostream>
using namespace std;
int main()
{
	int i=1,j=1,n;
	
	cout<<"enter num:";
	cin>>n;
	
    for(j=1;j<=n;j++)
    {
    	i=i*j;
	}
	cout<<"factorial = "<<i;
}
