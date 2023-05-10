//5-accept num from user and print the whole num in reverse order from given no.

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	
	cout<<"enter num:";
	cin>>n;
	
	i=n;
	while(i>=1)
	{
		cout<<i<<endl;
		i--;
	}
}
