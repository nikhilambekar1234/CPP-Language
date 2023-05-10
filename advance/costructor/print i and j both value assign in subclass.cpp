/*11.A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'. 
Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value of 'j'. 
Make an object of the subclass and use it to assign a value to 'i'and to 'j'.Now call the function 'printNum' by this object.*/

#include<iostream>
using namespace std;
class integer
{
	int i;
	public:
		integer(int i)
		{
			this->i=i;
		}
		void printNum()
		{
			cout<<" i = "<<i<<endl;
		}
};
class subclass : public integer
{
	int j;
	public:
		subclass(int i,int j):integer(i)
		{
			integer::printNum();
			this->j=j;
		}
		void printNum()
		{
		//	integer::printNum();
			cout<<" j = "<<j<<endl;
		}
			
};
int main()
{
	subclass s(5,7);
	s.printNum();
}
