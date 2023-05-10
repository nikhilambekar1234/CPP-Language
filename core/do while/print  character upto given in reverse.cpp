//2- accept character from user
// and print the character series in reverse order from z to given character.

#include<iostream>
using namespace std;
int main()
{
	char ch='z',ch1;
	
	cout<<"enter character:";
	cin>>ch1;
	
	do
	{
		cout<<ch<<endl;
		
		ch--;
	}
	while(ch>=ch1);
}
