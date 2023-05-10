//6-accept num from user and print all prime no from 1 to given no.

#include<iostream>
using namespace std;
int main()
{
	int n,i,m,count=0;
	
	cout<<"enter num:";
	cin>>n;
	
	for(m=1;m<=n;m++)
	{
		i=1;
		count=0;
		while(i<=m)
		{
			if(m%i==0)
			{
				count++;
			}
			i++;
		}
		if(count==2)
		{
			cout<<m<<endl;
		}
	}
}
