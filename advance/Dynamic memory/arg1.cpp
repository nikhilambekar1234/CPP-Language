//6-Accept two num from user using command line argument and make addition,sub,div,mult.

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
	int a,b;
	float div;
	
	a=atol(argv[1]);
	b=atol(argv[2]);
	
	cout<<"sum = "<<a+b<<endl;
	cout<<"sub = "<<a-b<<endl;
	cout<<"mult = "<<a*b<<endl;
	div=(float)a/b;
	cout<<"div = "<<div;
}
