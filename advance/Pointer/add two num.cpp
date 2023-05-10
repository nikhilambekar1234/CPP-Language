//4. Write a program in C to add two numbers using pointers

#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
  
 	int *ptr1=&a;
	int *ptr2=&b;
	cout<<"enter two num:\n";
	cin>>a>>b;
	
	sum=*ptr1+*ptr2;
	
	cout<<"sum = "<<sum;
}
