#include<iostream>
using namespace std;
int main()
{
	int i,n,j,no=1,m=1;
	char ch='a';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2!=0)
			{
				cout<<no;
				no++;
			}
			else
			{
				cout<<(2*m);
				m++;
			}
		}
        cout<<endl;
	}
}
