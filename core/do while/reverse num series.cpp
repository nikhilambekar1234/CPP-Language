//5-accept num from user and print the whole num in reverse order from given no.

#include<iostream>
using namespace std;
int main()
{
	int i;
	
	cout<<"enter num:";
	cin>>i;
	
	do
	{
		cout<<i<<endl;
		i--;
	}
	while(i>=1);
}
