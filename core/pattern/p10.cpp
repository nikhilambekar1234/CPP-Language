#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	
	cout<<"enter num:";
	cin>>n;
	
	char ch;
	for(i=1;i<=n;i++)
	{
		ch='A';
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				cout<<ch;
				ch++;
			}
			else
			{
				cout<<" ";
				ch++;
			}
		}
		cout<<endl;
	}
}
