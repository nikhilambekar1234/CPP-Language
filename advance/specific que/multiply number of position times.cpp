#include<iostream>
using namespace std;
int main()
{
	int n,i,rev=0,rem,temp,count=0,size=0,mult=1;
	cout<<"enter element:\n";
	cin>>n;
        while(n!=0)
		{
			rem=n%10;
			count++;
			rev=rev*10+rem;
			n=n/10;
		}
		temp=count;
		cout<<" pow => "<<endl;
		while(rev!=0)
		{
			mult=1;
			size=temp-(count-1);
			rem=rev%10;
			for(i=1;i<=size;i++)
			{
				mult=mult*rem;
			}
			cout<<rem<<" = "<<mult<<endl;
			count--;
			rev=rev/10;
		}
}
