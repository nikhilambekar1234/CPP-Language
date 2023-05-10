//14-accept character from user and swap the case of character.

#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"enter character:";
	cin>>ch;
	
	if(ch>=65 && ch<=90)
	{
		ch+=32;
		cout<<ch;
	}
	else if(ch>=97 && ch<=122)
	{
		ch-=32;
		cout<<ch;
	}
	
}
