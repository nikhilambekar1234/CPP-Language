#include<iostream>
using namespace std;
int main()
{
	int i,n,j,no=1,m=1;
	char ch='A';
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			if(no%2!=0)
			{
			  cout<<m;
			  m++;
			}
			else
			{
				cout<<ch;
				ch++;
			}
			no++;
		}
		cout<<endl;
	}
}
