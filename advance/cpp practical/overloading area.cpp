//12. Write a C++ program to calculate the area of rectangle, square using function overloading. 
#include<iostream>
using namespace std;
class Area
{
	public:
		print(int b,int l)
		{
			cout<<" Area of rectangle = "<<l*b<<endl;
		}
		print(int s)
		{
			cout<<" Area of square = "<<s*s;
		}
};
int main()
{
	Area rect;
	Area squa;
	rect.print(4,8);
	squa.print(5);
	
	//Area ::print(4,8);  by static fun without fun
//	Area ::print(5);
	
}
