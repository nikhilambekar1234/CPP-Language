/*11. Write a program in C to swap elements using call by reference. 
Test Data :
Input the value of 1st element : 5
Input the value of 2nd element : 6
Input the value of 3rd element : 7
Expected Output :
The value before swapping are :                                                                              
element 1 = 5                                                                                                
element 2 = 6                                                                                                
element 3 = 7                                                                                                
                                                                                                             
The value after swapping are :                                                                               
element 1 = 7                                                                                                
element 2 = 5                                                                                                
element 3 = 6 */


#include<iostream>
using namespace std;
int fun(int *ptr1,int *ptr2,int *ptr3)
{
	int temp;
	
	temp=*ptr1;
	*ptr1=*ptr3;
	*ptr3=*ptr2;
	*ptr2=temp;
	
}
int main()
{
	int a=5,b=6,c=7;
  
 	int *ptr1=&a;
	int *ptr2=&b;
	int *ptr3=&c;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    
    fun(&a,&b,&c);
    
    cout<<"after swap\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    
}


