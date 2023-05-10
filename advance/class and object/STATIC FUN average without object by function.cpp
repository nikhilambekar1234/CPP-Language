//8. Print the average of three numbers entered by the user by creating a class named 'Average'
// having a function to calculate and print the average without creating any object of the Average class.

#include<iostream>
using namespace std;
class Average
{
	public:
		static float fun(float a,float b,float c)//when object not create then data member access by static
		{
		//	float avg=(a+b+c)/3;
		//	cout<<"avg="<<avg;
		    return (a+b+c)/3;
		}
};
int main()
{
	float a,b,c;

	cout<<"enter three num:\n";
	cin>>a>>b>>c;
//	Average::fun(a,b,c);
    cout<<"avg = "<<Average::fun(a,b,c);//call with function when object not create
}

