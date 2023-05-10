//10. Write a C++ program to compare two strings using string functions. 

#include<iostream>
#include <string.h>   
using namespace std;    
int main()
{    
	char str1[20],str2[20];    
	cout<<"Enter 1st string: ";    
	gets(str1);//reads string from console    
	cout<<"Enter 2nd string: ";    
	gets(str2);    
	if(strcmp(str1,str2)==0)    
	    cout<<"Strings are equal";    
	else    
	    cout<<"Strings are not equal";    
	 return 0;    
}    

