//square and cube

#include<iostream>
using namespace std;
int fun(int n)
{
	int i;
	
	for(i=1;i<=n;i++)
	{
		cout<<i<<"  "<<(i*i)<<"  "<<(i*i*i)<<endl;
	}
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n);
}
