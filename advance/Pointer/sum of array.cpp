/*16. Write a program in C to compute the sum of all elements in an array using pointers. 
Test Data :
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :
 The sum of array is : 20 */
 
#include<iostream>
using namespace std;
int main()
{
	int a[10]={2,3,4,5,6},i,sum=0;
	int *ptr=a;
	
	for(i=0;i<10;i++)
	{
		sum+=*(ptr+i);
	}
	cout<<"sum = "<<sum<<endl;
}

