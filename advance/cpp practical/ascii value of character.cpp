//44. Write a C++ program to print the ASCII value of a user entered character. 

#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"enter character:\n";
	cin>>ch;
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		cout<<ch<<" = "<<int(ch);
	}
	
}
