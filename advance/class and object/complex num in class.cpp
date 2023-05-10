//9. Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
// with separate functions for each operation whose real and imaginary parts are entered by the user.	

#include<iostream>
using namespace std;
class Complex
{
	public:
		int real,img;
		
	Complex	add(Complex n1,Complex n2)
		{
			Complex n3;
	        n3.real=n1.real+n2.real;
         	n3.img=n1.img+n2.img;
	
        	if(n3.img>0)
	        {
	        	cout<<"sum = "<<n3.real<<"+"<<n3.img<<"i"<<endl;
        	}
        	else
        	{
	        	cout<<"sum = "<<n3.real<<n3.img<<"i"<<endl;
        	}
		}
	Complex	sub(Complex n1,Complex n2)
	{
		Complex n3;
		n3.real=n1.real-n2.real;
	    n3.img=n1.img-n2.img;
	
    	if(n3.img>0)
    	{
		   cout<<"sub = "<<n3.real<<"+"<<n3.img<<"i"<<endl;
	    }
	    else
    	{
	    	cout<<"sub = "<<n3.real<<n3.img<<"i"<<endl;
	    }
	}
	Complex	mult(Complex n1,Complex n2)
	{
		Complex n3;
		n3.real=n1.real*n2.real-n1.img*n2.img;
	    n3.img=n1.img*n2.real+n1.real*n2.img;
	
    	if(n3.img>0)
    	{
	    	cout<<"mult = "<<n3.real<<"+"<<n3.img<<"i"<<endl;
    	}
    	else
    	{
	    	cout<<"mult = "<<n3.real<<n3.img<<"i"<<endl;
    	}
	}
};
int main()
{
	Complex n1,n2,n3;
	cout<<"enter first num\n";
	cin>>n1.real>>n1.img;
	
	cout<<"enter second num\n";
	cin>>n2.real>>n2.img;
	
	n3.add(n1,n2);
	n3.sub(n1,n2);
	n3.mult(n1,n2);
	
}
