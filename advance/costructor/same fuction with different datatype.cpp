/*5.Create a class named 'PrintNumber' to print various numbers of different datatypes by creating different functions
 with the same name 'printn' having a parameter for each datatype.*/
//OVERLOADING
#include<iostream>
using namespace std;
class PrintNumber
{
	public:
		void printn(int a)
		{
			cout<<a<<endl;
		}
		void printn(double b)
		{
			cout<<b<<endl;
		}
		void printn(char c)
		{
			cout<<c<<endl;
		}
		void printn(string d)
		{
			cout<<d<<endl;
		}
		void printn(int a,int b)
		{
			cout<<a<<","<<b<<endl;
		}
		void printn(int a,string c)
		{
			cout<<a<<","<<c<<endl;
		}
};
int main()
{
    PrintNumber n;
	n.printn(1);
	n.printn(8,9);
	n.printn(9.9);
	n.printn(15,"sir");
	n.printn('c');
	n.printn("nik");
		
} 

