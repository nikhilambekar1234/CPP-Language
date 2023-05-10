//9-accept amount from user and print the count of notes by given way.

#include<iostream>
using namespace std;
int main()
{
	int amount,div,mult,remain,sum=0;
	
	cout<<"enter amount:";
	cin>>remain;
	
	div=remain/2000;
	remain%=2000;
	mult=2000*div;
	sum+=mult;
	cout<<"2000*"<<div<<"="<<mult<<endl;
	
	div=remain/1000;
	remain%=1000;
	mult=1000*div;
	sum+=mult;
	cout<<"1000*"<<div<<"="<<mult<<endl;
	
	div=remain/500;
	remain%=500;
	mult=500*div;
	sum+=mult;
	cout<<" 500*"<<div<<"="<<mult<<endl;
	
	div=remain/200;
	remain%=200;
	mult=200*div;
	sum+=mult;
	cout<<" 200*"<<div<<"="<<mult<<endl;
	
	div=remain/100;
	remain%=100;
	mult=100*div;
	sum+=mult;
	cout<<" 100*"<<div<<"="<<mult<<endl;
	
	div=remain/50;
	remain%=50;
	mult=50*div;
	sum+=mult;
	cout<<"  50*"<<div<<"="<<mult<<endl;
	
	div=remain/20;
	remain%=20;
	mult=20*div;
	sum+=mult;
	cout<<"  20*"<<div<<"="<<mult<<endl;
	
	div=remain/10;
	remain%=10;
	mult=10*div;
	sum+=mult;
	cout<<"  10*"<<div<<"="<<mult<<endl;
	
	div=remain/5;
	remain%=5;
	mult=5*div;
	sum+=mult;
	cout<<"   5*"<<div<<"="<<mult<<endl;
	
	div=remain/2;
	remain%=2;
	mult=2*div;
	sum+=mult;
	cout<<"   2*"<<div<<"="<<mult<<endl;
	div=remain/1;
	remain%=1;
	mult=1*div;
	sum+=mult;
	cout<<"   1*"<<div<<"="<<mult<<endl;
	cout<<"          "<<sum<<"=TOTAL"<<endl;
}
