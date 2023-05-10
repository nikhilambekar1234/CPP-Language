//1-reverse num

#include<iostream>
using namespace std;
int main()
{
	int n,temp,rev=0,rem;
	cout<<"enter num:\n";
	cin>>n;
	
	cout<<"reverse num\n";
		temp=n;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		cout<<rev<<endl;

}
