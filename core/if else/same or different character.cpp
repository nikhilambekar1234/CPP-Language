//8-accept character a-z and check given character are same or different.

#include<iostream>
using namespace std;
int main()
{
	char ch,ch1;
	
	cout<<"enter two character a-z:";
	cin>>ch>>ch1;
	
	if(ch==ch1)
	{
		cout<<"same character";
	}
	else
	{
		cout<<"different character";
	}
}
