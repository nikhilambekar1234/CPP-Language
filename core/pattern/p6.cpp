#include<iostream>
using namespace std;
int main()

{
	int i,n,j,no=1,m=1;
	char ch=65;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				cout<<ch;
		    	ch++;
			}
			else
			{
				cout<<no;
				no++;
			}
	    }
        cout<<endl;
	}
}
