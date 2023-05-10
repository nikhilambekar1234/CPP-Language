//1-creat the fun and check the given matrix is lower triangular matrix or not

#include<iostream>
using namespace std;
int fun()
{
	int a[3][3],i,j,count=0;
	
	cout<<"enter element:"<<endl;
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cin>>a[i][j];
		}
	}
	cout<<"yout data:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j && a[i][j]==0)
			{
				count++;
			}
		}
	}
	if(count==3)
	{
		cout<<"lower tringular";
	}
	else
	{
		cout<<"not lower tringular";
	}
}
int main()
{
	fun();
}
