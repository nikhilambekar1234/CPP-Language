//2- accept character from user and print the character series in reverse order from z to given character.

#include<iostream>
using namespace std;
int main()
{
	char ch,ch1;
	
	cout<<"enter num:";
	cin>>ch1;
	
	ch='Z';
	while(ch>=ch1)
	{
		cout<<ch<<endl;
		ch--;
	}
}
