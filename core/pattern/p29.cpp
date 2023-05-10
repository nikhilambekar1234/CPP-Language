#include<iostream>
using namespace std;
int main()
{
	int i,j,n,no=1;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<no;
			no++;
		}
		no--;
		cout<<endl;
	}
}
