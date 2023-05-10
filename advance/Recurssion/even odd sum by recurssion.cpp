//7-accept n from user and make addition of even no and odd no from 1-n
// and print the diff beteween both addition positive way.

#include<iostream>
using namespace std;
int fun(int n,int i)
{
	static int even=0;
	static int odd=0;
    if(i<=n)//base condition
    {
    	if(i%2==0)
    	{
    		even+=i;
		}
		else
		{
			odd+=i;
		}
		return fun(n,i+1);
	}
	
	cout<<"even sum = "<<even<<endl;
	cout<<"odd sum = "<<odd<<endl;
	if(even>odd)
	{
		cout<<"diff = "<<even-odd;
	}
	else
	{
		cout<<"diff = "<<odd-even;
	}
  
}
int main()
{
	int n,i=1;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n,i);
	
}
