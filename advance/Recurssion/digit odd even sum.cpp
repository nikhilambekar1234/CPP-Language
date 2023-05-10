//8-accept no from user and make addition of even digit & odd digit present in num
// and print the diff.eg 12345

#include<iostream>
using namespace std;
int fun(int n)
{
  int rem;
  static int even=0;
  static int odd=0;
  while(n!=0)
  {
  	rem=n%10;
    if(rem%2==0)
    {
    	even+=rem;
	}
	else
	{
		odd+=rem;
	}
  	return fun(n/10);
  }
  
  cout<<"even sum = "<<even<<endl;
  cout<<"odd sum = "<<odd<<endl;
  
}
int main()
{
	int n;
	
	cout<<"enter num:";
	cin>>n;
	
	fun(n);
}
