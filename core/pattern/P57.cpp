#include<iostream>
using namespace std;
int main()
{
	int i,j,n,no=1,m=1;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(no%2==0)
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
