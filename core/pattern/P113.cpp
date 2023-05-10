#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,no;
	char ch='A';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		no=1;
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=(n-i)+1;k++)
		{
			if(i%2!=0)
			{
			    cout<<no;
				no++;	
			}
			else
			{
				cout<<ch;
			}
		}
		if(i%2==0)
		{
			ch++;
		}
		cout<<endl;
	}
}
