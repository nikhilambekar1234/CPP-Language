//3-accept base and height of triangle from user and print area of triangle 

#include<iostream>
using namespace std;
int main()
{
	int b,h;
	float area;
	
	cout<<"Enter base and height:";
	cin>>b>>h;
	
	area=0.5*b*h;
	cout<<"Area of triangle = "<<area;
	
}
