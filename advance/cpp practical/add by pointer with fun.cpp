//5. Write a program in C to add numbers using call by reference. 
//add by pointer with fun
#include<iostream>
using namespace std;
int fun(int *ptr1,int *ptr2)
{
	int sum;
	sum=*ptr1+*ptr2;
	return sum;
}
int main()
{
	int a,b,sum;
  
	cout<<"enter two num:\n";
	cin>>a>>b;
	
    sum=fun(&a,&b);
    cout<<"sum = "<<sum<<endl;
    
}
