#include<iostream>
using namespace std;
int main()

{
	int i,n,j,no=1,m=1;
	char ch='z';
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<ch;
		    ch--;
	    }
        cout<<endl;
	}
}
