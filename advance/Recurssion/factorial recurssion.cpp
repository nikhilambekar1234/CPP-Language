//17. Write a C++ program to find the factorial of a given number using recursion. 

#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	return 0;
	
	else if(n==1)
	return 1;
	
	else
	return n*fact(n-1);
	
}
int main()
{
	int n,f;
	cout<<"enter num:\n";
	cin>>n;
	cout<<"fact of n = "<<fact(n);

}
