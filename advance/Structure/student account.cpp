//Write a structure to store the name, account number and balance of customers (more than 10)
// and store their information.
//1Write a fun to print the names of all the customers having balance less than $200.
//2Write a fun to add $100 in the balance of all the customers having more than $1000
// in their balance and then print the incremented value of their balance.

#include<iostream>
using namespace std;
struct account
{
	char name[10];
	int ac;
	float bal;
};
int fun(struct account s[4])
{
	int i;
	
	cout<<"balance less than 200\n";
	for(i=0;i<4;i++)
	{
		if(s[i].bal<200)
		{
			cout<<s[i].name<<"   "<<endl;
		}
	}
}
int gun(struct account s[4])
{
	int i;
	
	cout<<"balance more than 1000\n";
	for(i=0;i<4;i++)
	{
		if(s[i].bal>1000)
		{
			s[i].bal+=100;
			cout<<s[i].name<<"   "<<s[i].ac<<"   "<<s[i].bal<<"   "<<endl;
		}
	}
}
int main()
{
	int i;
	struct account s[4];
	
	cout<<"enter data:\n";
	for(i=0;i<4;i++)
	{
		cin>>s[i].name>>s[i].ac>>s[i].bal;
	}
	cout<<"name    "<<"ac     "<<"bal     "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<s[i].name<<"   "<<s[i].ac<<"   "<<s[i].bal<<"   "<<endl;
	}
	fun(s);
	gun(s);
}

