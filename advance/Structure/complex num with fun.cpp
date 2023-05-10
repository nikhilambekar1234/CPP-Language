//WAP to add, subtract and multiply two complex numbers using structures to function.

#include<iostream>
using namespace std;
struct complex
{
	int real;
	int img;
};
int fun(struct complex n1,struct complex n2)
{
	struct complex n3;
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
int main()
{
	struct complex n1,n2;
	
	cout<<"enter first complex num:\n";
	cin>>n1.real>>n1.img;
	cout<<"enter second complex num:\n";
	cin>>n2.real>>n2.img;
	
	fun(n1,n2);
}

