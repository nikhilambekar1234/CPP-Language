#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=1;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(n-i)+1;k++)
		{
			if(i%2!=0)
			{
				cout<<ch;
				ch++;
			
			}
			else
			{
				cout<<no;
				no++;
			}
		}
		cout<<endl;
	}
}
