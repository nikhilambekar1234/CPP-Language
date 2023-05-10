/*11.A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'. 
Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value of 'j'. 
Make an object of the subclass and use it to assign a value to 'i'and to 'j'.Now call the function 'printNum' by this object.*/

#include<iostream>
using namespace std;
class integer
{
	int i;
	public:
		int printNum(int i)
		{
			return i;
		}
};
class subclass : public integer
{
	int j;
	public:
		int printNum(int j)
		{
			return j;
			
		}
			
};
int main()
{
	subclass s;
	cout<<" i = "<<s.integer::printNum(7)<<endl;
	cout<<" j = "<<s.printNum(5);
	
}
