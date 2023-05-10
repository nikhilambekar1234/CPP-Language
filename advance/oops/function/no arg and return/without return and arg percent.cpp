//percent

#include<iostream>
using namespace std;
int fun()
{
	int a,b,c,d,e;
	float sum,percent;
	
	cout<<"enter five num:";
	cin>>a>>b>>c>>d>>e;
	
	sum=a+b+c+d+e;
	
	percent=(sum/500)*100;
	
	cout<<"sum = "<<sum<<endl;
	
	cout<<"percent = "<<percent;
}
int main()
{
	fun();
}
