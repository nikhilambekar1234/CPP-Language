/* 13. Write a program in C++ to count the number of vowels and consonants in a string using a pointer. 
Test Data :
Input a string: string */

#include<iostream>
using namespace std;
int main()
{
	char str[]="string";
	int i,count=0,temp=0;
	char *ptr=str;
	
	for(i=0;*(ptr+i)!='\0';i++)
	{
		if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
		{
			count++;
		}
		else
		{
			temp++;
		}
	}
	cout<<"vowel = "<<count<<endl;
	cout<<"consonant = "<<temp<<endl;
}

