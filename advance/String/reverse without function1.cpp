//4-Reverse

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100],temp;
	int i,l,j;
	
	cout<<"enter string:\n";
	gets(str);
	l=strlen(str);
	cout<<l<<endl;
	cout<<"reverse\n"<<endl;
	for(i=l-1;str[i]>=0;i--)
	{
		cout<<str[i];
	}
}
