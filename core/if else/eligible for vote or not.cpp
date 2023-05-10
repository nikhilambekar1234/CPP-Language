//7-accept age from user and check the person is elegible for vote or not.18yr

#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"enter age:";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"eligible for vote";
	}
	else
	{
		cout<<"Not eligible for vote";
	}
}
