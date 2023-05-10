//18-Count how many times a number present

#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,count=0;
	
	cout<<"enter element:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"enter num:"<<endl;
	cin>>n;
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			count++;
		}
	}
	cout<<n<<" "<<count<<" times";
}
