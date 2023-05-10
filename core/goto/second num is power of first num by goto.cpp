//8-accept the two number from user and calculate the second num is the power of first num.

#include<iostream>
using namespace std;
int main()
{
	int i,n,j=0,mult=1;
	
	cout<<"enter num and power:";
	cin>>i>>n;
	
	kdn :
		
		j++;
		if(j<=n)
		{
			mult=mult*i;
			goto kdn;
		}
		cout<<"result = "<<mult;
		
}
