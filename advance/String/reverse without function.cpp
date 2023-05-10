//4-Reverse

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[20],temp;
	int i,length;
	
	cout<<"Enter string1-";
    gets(str1);
    length=strlen(str1);
    
	
    for(i=0;i<(length/2);i++)
   	{
       temp=str1[i];
       str1[i]=str1[length-1-i];
       str1[length-1-i]=temp;
	}
   	cout<<length<<endl;
   	cout<<str1;
}
