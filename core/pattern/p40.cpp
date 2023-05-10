#include<iostream>
using namespace std;
int main()
{
	int i,n,j,no;
	char ch='a';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		no=i;
		for(j=1;j<=n;j++)
		{
			cout<<no;
			no++;
			
		}
		cout<<endl;
	}
}
