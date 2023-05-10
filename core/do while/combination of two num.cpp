//12-accept no from user and print the combination of two no which gives addition of given no.

#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	
	cout<<"enter num:";
	cin>>n;
	
	i=1;
	
	do
	{
		j=n;
		
		do
		{
			if(i!=j && i+j==n)
		    {
			   cout<<i<<"+"<<j<<endl;
		    }
		    j--;
		}
		while(j>=1);
		
	 i++;	
	}
	while(i<n);
	
}
