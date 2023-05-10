//6-accept number from user and print all even number from 1 to n.

#include<iostream>
using namespace std;
int main()
{
	int i=0,n;
	
	  cout<<"enter num:";
	  cin>>n;
		
		kdn :	
		
		i++;
		if(i%2==0 && i<=n)
		{
			cout<<i<<endl;
			goto kdn;
		}
		else
		{
			goto kdn;
		}
}
