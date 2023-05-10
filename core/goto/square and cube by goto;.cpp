//7-accept num from user and print the square & cube of all number 1 - n.

#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	
	cout<<"enter num:";
	cin>>n;
	
	kdn :
		cout<<i<<"="<<(i*i)<<"      "<<(i*i*i)<<endl;
		
		i++;
		if(i<=n)
		{
			goto kdn;
		}
}
