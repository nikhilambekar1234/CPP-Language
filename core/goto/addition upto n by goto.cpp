//1-accept num from user and make the addition of all number from 1 to n using goto.

#include<iostream>
using namespace std;
int main()
{
	int n,add=0,i=0;
	
	cout<<"enter num:";
	cin>>n;
	
	kdn :
		add+=i;
		
		i++;
		if(i<=n)
		{
			goto kdn;
		}
		
	cout<<"addition = "<<add;	
}
