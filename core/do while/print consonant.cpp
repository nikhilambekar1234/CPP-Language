//1-print all consonant using for loop.

#include<iostream>
using namespace std;
int main()
{
	char ch='a';
	
	do
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			
		}
		else
		{
			cout<<ch<<endl;
		}
		ch++;
	}
	while(ch<='z');
}
