/*15. Write a program in C to show how a function returning pointer. 
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
 The number 6 is larger. */
 
#include<iostream>
using namespace std;
int fun(int *ptr1,int *ptr2)
{
	if(*ptr1>*ptr2)
	{
		return *ptr1;
	}
	else
	{
		return *ptr2;
	}
}
int main()
{
	int a,b,res;
  
	cout<<"enter two num:\n";
	cin>>a>>b;
	
    res=fun(&a,&b);
    
    cout<<"max = "<<res<<endl;
}

