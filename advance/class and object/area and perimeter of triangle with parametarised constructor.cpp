//4. Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
// by creating a class named 'Triangle' with the constructor having the three sides as its parameters.

#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
	public:
		
	int s1,s2,s3;
	
	Triangle(int x,int y,int z)
	{
		s1=x;
		s2=y;
		s3=z;
	}
	Triangle(Triangle &p)
	{
	  	s1=p.s1;
		s2=p.s2;
		s3=p.s3;
	}
	void show()
	{
		float s=((s1+s2+s3)/2.0);
    	float A=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    	cout<<"area of triangle = "<<A<<endl;
	}
	void display()
	{
		cout<<" perimeter of triangle = "<<s1+s2+s3<<endl;
	}
	
	
};
int main()
{
	Triangle area(3,4,5);
	Triangle perimeter(area);
	
	area.show();
	perimeter.display();
	
}
