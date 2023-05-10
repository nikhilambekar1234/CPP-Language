#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no=2;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		no=2;
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(n-i)+1;k++)
		{
			cout<<no%2;
			no++;
		}
		cout<<endl;
	}
}
