//12-Accept sentence from user and accept character from user
// and check whether how many words present in string start with given character.

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
		if(str[i]==ch && i==0)
		{
			count++;
		}
		else if(str[i]==' ')
		{
			i++;
			if( str[i]==ch)
			{
				count++;
			}
		}
		
	}
	cout<<"word having start with entered character = "<<count;
}
