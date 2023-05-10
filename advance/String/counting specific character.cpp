//11-Accept string from user and accept character from user
// and check count of character present in given string.

#include<iostream>
using namespace std;
int main()
{
	char str[100],ch;
	int count=0,i;
	cout<<"enter string:\n";
	gets(str);
	cout<<"enter character:\n";
	cin>>ch;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
		
	}
	cout<<"times of character = "<<count;
}
