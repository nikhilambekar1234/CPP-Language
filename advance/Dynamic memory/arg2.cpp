//8-Accept three num from command line and print the character in assending order.

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
	int a,b,c,temp,i;
	
	a=atol(argv[1]);
	b=atol(argv[2]);
	c=atol(argv[3]);
	for(i=1;i<=10;i++)
	{
		if(a>b)
	   {
		    temp=a;
		    a=b;
	    	b=temp;
    	}
     	else if(b>c)
	   {
	    	temp=b;
	    	b=c;
	    	c=temp;
    	}
	}
	
	cout<<a<<" "<<b<<" "<<c<<endl;
}
