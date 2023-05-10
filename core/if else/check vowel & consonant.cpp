//13-accept character from user and check the character is vowel or consonant.

#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"enter character:";
	cin>>ch;
	
	if(ch>=65 && ch<=90)
	{
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			cout<<"cap vowel";
		}
		else
		{
			cout<<"cap comsonant";
		}
	}
	else
	{
		if(ch>=97 && ch<=122)
	    {
	     	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	     	{
		    	cout<<"small vowel";
	    	}
	    	else
	     	{
		    	cout<<"small consonant";
		    }
     	}
	}
	
}
