//12-accept no from user and print the combination of two no which gives addition of given no.

#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	
	cout<<"enter num:";
	cin>>n;
	
	i=1;
	while(i<n)
	{
		j=n;
		while(j>=1)
		{
			if(i!=j && i+j==n)
			{
				cout<<i<<"+"<<j<<endl;
			}
			j--;
		}
		i++;
	}
}
