//5-accept number from user and print the multiplication table of the given number

#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	
	cout<<"enter num:";
	cin>>n;
	
	kdn :
		cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
		
		i++;
		if(i<=10)
		{
			goto kdn;
		}
}
