//11-accept year from user and check the yr is leap yr or not

#include<iostream>
using namespace std;
int main()
{
	int yr;
	
	cout<<"enter yr:";
	cin>>yr;
	
	if(yr%4==0 || yr%400==0 && yr%100!=0)
	{
		cout<<"leap year";
	}
	else
	{
		cout<<"Not leap year";
	}
}

