/*Create a class named 'Programming'. While creating an object of the class, if nothing is passed to it,
 then the message "I love programming languages" should be printed. If some String is passed to it,
 then in place of "programming languages" the name of that String variable should be printed.
For example, while creating the object if we pass "cpp", then "I love cpp" should be printed.*/

#include<iostream>
using namespace std;
class Programming
{
	string name;
	public:
		Programming()
		{
			name="I love programming languages";
			
		}
		Programming(string n)
		{
			name=n;
		}
		string print()
		{
			return name;
		}
}; 
int main()
{
	Programming p1;
	Programming p2("Java");
	
	cout<<p1.print()<<endl;
	cout<<"i love  "<<p2.print();
}

