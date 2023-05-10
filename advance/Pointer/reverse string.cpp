//reverse string

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]="KDNinfotech";
	int l,i;
	l=strlen(str);
	
	char *ptr = str;
	
	for(i=l-1;i>=0;i--)
	{
		cout<<*(ptr+i); 
	}
}
