#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i)+1;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
