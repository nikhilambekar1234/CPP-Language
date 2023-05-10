/*17. Write a program in C++ to print the elements of an array in reverse order. 
Test Data :
Input the number of elements to store in the array (max 15) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6 */

#include<iostream>
using namespace std;
int main()
{
	int a[10]={2,3,4,5,6},i;
	int *ptr=a;
	
	for(i=4;i>=0;i--)
	{
		cout<<*(ptr+i)<<endl;
	}
	
}


