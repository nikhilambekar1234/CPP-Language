#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=0;
	;
	char ch=65,temp=0;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		ch+=no;
		temp=ch;
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<temp;
			temp--;
		}
		no++;
		cout<<endl;
	}
}
