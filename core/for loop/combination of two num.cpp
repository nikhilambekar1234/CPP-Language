//12-accept no from user and print the combination of two no which gives addition of given no.(eg 10=8+2)

#include<iostream>
using namespace std;
int main()
{
	int n,j,i;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i!=j && i+j==n)
			{
				cout<<i<<"+"<<j<<endl;
			}
		}
	}
	
}
