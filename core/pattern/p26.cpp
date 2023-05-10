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
		no=i;
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				cout<<ch;
			      
			}
			else
			{
				cout<<i-1;
			}
	    	
		}
		if(i%2!=0)
		{
			ch++;
		}
        cout<<endl;
	}
}
