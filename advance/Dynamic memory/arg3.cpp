//7-Accept num from user and check the no is odd even 

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
	int a;
	
	a=atol(argv[1]);
	
	if(a%2==0)
	{
		cout<<"even num"<<endl;
	}
	else
	{
		cout<<"odd num"<<endl;
	}
}
