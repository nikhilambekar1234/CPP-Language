#include<iostream>
using namespace std;
int main()
{
	int i,j,n,no=1;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<(no%2);
			no++;
		}
		cout<<endl;
	}
}
