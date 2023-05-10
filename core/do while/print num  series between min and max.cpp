//11-accept two num consider lower boundary & upper boundary
// and print all no in between lower and upper bounary in decending order.

#include<iostream>
using namespace std;
int main()
{
	int i,min,max;
	
	cout<<"enter min and max:";
	cin>>min>>max;
	i=max;
	do
	{
		if(i!=max)
		{
			cout<<i<<endl;
		}
		i--;
	}
	while(i>min);
	
}
