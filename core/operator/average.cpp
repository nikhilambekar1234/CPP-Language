//3-accept five integer num from user and print avg of the no.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	float sum,avg;
	
	cout<<"enter five integer num:";
	cin>>a>>b>>c>>d>>e;
	
	sum=a+b+c+d+e;
	avg=(float)(sum/5);
	
	cout<<"Avg = "<<avg;
}
