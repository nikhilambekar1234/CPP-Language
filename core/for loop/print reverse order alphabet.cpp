//2- accept character from user and print the character series in reverse order from z to given character.

#include<iostream>
using namespace std;
int main()
{
	char ch,ch1;
	
	cout<<"enter character:";
	cin>>ch1;
	
	for(ch='z';ch>=ch1;ch--)
	{
		cout<<ch<<endl;
	}
}
