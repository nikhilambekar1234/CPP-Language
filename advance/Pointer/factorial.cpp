//12. Write a program in C++ to find the factorial of a given number using pointers. 

#include<iostream>
using namespace std;
int main()
{
	int a,i=1,j=1;
  
 	int *ptr=&a;

	cout<<"enter num:\n";
	cin>>*ptr;
	
	for(i=1,j=1;j<=*ptr;j++)
	{
		i=i*j;
	}
	cout<<"factorial = "<<i;
}
