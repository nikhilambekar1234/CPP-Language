//4-accept marks of 6 subject from user calculate the percentage
// and check the student is elegible for mnc company or not.(criteria=60%)

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	float sum,percent;
	
	cout<<"enter marks of six sub each sub having 100 marks:";
	cin>>a>>b>>c>>d>>e>>f;
	
	sum=a+b+c+d+e+f;
	percent=(float)(sum/600)*100;
	
	cout<<"percent = "<<percent<<endl;
	
	if(percent>=60)
	{
		cout<<"eligible for MNC";
	}
	else
	{
		cout<<"Not eligible for MNC";
	}
}
