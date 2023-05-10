//square and cube

#include<iostream>
using namespace std;
int fun()
{
	int i,n;
	
	cout<<"enter num:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<i<<"  "<<(i*i)<<"  "<<(i*i*i)<<endl;
	}
}
int main()
{
	fun();
}
