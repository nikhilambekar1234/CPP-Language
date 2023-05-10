//6. Write a program in C to find the maximum number between two numbers using a pointer. 

#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
  
 	int *ptr1=&a;
	int *ptr2=&b;
	cout<<"enter two num:\n";
	cin>>a>>b;
	
	if(*ptr1>*ptr2)
	{
		cout<<"max = "<<*ptr1;
	}
	else
	{
		cout<<" max = "<<*ptr2;
	}
}
