//percent

#include<iostream>
using namespace std;
int fun(int a,int b,int c,int d,int e)
{
	float sum,percent;
	
	sum=a+b+c+d+e;
	
	percent=(sum/500)*100;
	
	cout<<"sum = "<<sum<<endl;
	
	cout<<"percent = "<<percent;
}
int main()
{
	int a,b,c,d,e;

	cout<<"enter five num:";
	cin>>a>>b>>c>>d>>e;
	
	fun(a,b,c,d,e);
}
