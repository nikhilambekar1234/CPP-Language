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
		ch='a';
		for(j=1;j<=n;j++)
		{
	    	cout<<ch;
			ch++;;
		}
        cout<<endl;
	}
}
