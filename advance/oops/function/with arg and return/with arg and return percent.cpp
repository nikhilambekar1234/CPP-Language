//percent

#include<iostream>
using namespace std;
int fun(int a,int b,int c,int d,int e)
{
	float sum,percent;
	sum=a+b+c+d+e;
	
	percent=(sum/500)*100;
	
	cout<<"sum = "<<sum<<endl;
	cout<<"percent = "<<(float)percent<<endl;
	
	return percent;

}
int main()
{
	float res;
	int a,b,c,d,e;
	float sum,percent;
	
	cout<<"enter five num:";
	cin>>a>>b>>c>>d>>e;
	
	res=fun(a,b,c,d,e);
	cout<<"percent = "<<(float)res;
}
