#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=0,temp=0;
	;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		temp+=i;
		no=temp;
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<no;
			no--;
		}
		cout<<endl;
	}
}
