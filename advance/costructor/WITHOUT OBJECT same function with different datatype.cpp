/*5.Create a class named 'PrintNumber' to print various numbers of different datatypes by creating different functions
 with the same name 'printn' having a parameter for each datatype.*/
//OVERLOADING
#include<iostream>
using namespace std;
class PrintNumber
{
	public:
	static	void printn(int a)
		{
			cout<<a<<endl;
		}
	static	void printn(double b)
		{
			cout<<b<<endl;
		}
	static	void printn(char c)
		{
			cout<<c<<endl;
		}
	static	void printn(string d)
		{
			cout<<d<<endl;
		}
	static	void printn(int a,int b)
		{
			cout<<a<<","<<b<<endl;
		}
	static	void printn(int a,string c)
		{
			cout<<a<<","<<c<<endl;
		}
};
int main()
{
    PrintNumber ::printn(1);
    PrintNumber ::printn(8,9);
    PrintNumber ::printn(9.9);
    PrintNumber ::printn(15,"sir");
    PrintNumber ::printn('c');
    PrintNumber ::printn("nik");
} 

