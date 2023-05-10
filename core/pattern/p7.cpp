#include<iostream>
using namespace std;
int main()

{
	int i,n,j,no=1,m=1;
	char ch=64;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		ch=64+i;
		for(j=1;j<=i;j++)
		{
			cout<<ch;
		    ch++;
	    }
        cout<<endl;
	}
}
