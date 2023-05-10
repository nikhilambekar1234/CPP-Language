//3-accept 5 different number in a single varible and calculate the average.

#include<iostream>
using namespace std;
int main()
{
	int i,j=1;
	float sum,avg;
	
	kdn :
	cout<<"enter num:";
	cin>>i;
	
	sum+=i;
	
	j++;
	if(j<=5)
	{
		goto kdn;
	}
	
	cout<<"sum = "<<sum<<endl;
	cout<<"avg = "<<(sum/5);
	
}
