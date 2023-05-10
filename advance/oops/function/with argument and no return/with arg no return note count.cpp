//note counting

#include<iostream>
using namespace std;
int fun(int amount)
{
	int remain,div;
	
	div=amount/2000;
	remain=amount%2000;
	cout<<"2000*"<<div<<endl;
	
	div=remain/500;
	remain%=500;
	cout<<"500*"<<div<<endl;
	
	div=remain/200;
	remain%=200;
	cout<<"200*"<<div<<endl;
	
	div=remain/100;
	remain%=100;
	cout<<"100*"<<div<<endl;
	
	div=remain/50;
	remain%=50;
	cout<<"50*"<<div<<endl;
	
	div=remain/20;
	remain%=20;
	cout<<"20*"<<div<<endl;
	
	div=remain/10;
	remain%=10;
	cout<<"10*"<<div<<endl;
	
	div=remain/5;
	remain%=5;
	cout<<"5*"<<div<<endl;
	
	div=remain/2;
	remain%=2;
	cout<<"2*"<<div<<endl;
	
	
	cout<<"1*"<<remain<<endl;
}
int main()
{
	int amount;
	
	cout<<"enter amount:";
	cin>>amount;
	fun(amount);
}
