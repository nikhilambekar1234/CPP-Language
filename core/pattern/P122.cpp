#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=1;
	char ch='Z';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			if(i%2!=0)
			{
				cout<<no;
				no++;
			}
			else
			{
				cout<<ch;
				ch--;
			}
			
		}
		cout<<endl;
	}
}
