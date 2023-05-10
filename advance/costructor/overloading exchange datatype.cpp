/*6.Create a class to print an integer and a character using two functions having the same name
but different sequence of the integer and the character parameters.For example, if the parameters of the first function
 are of the form (int n, char c), then that of the second function will be of the form (char c, int n).*/

#include<iostream>
using namespace std;
class Datatype
{
	public:
		void print(int n ,string s)
		{
			cout<<n<<"  "<<s<<endl;
		}
		void print(string s, int n)
		{
			cout<<s<<"  "<<n<<endl;
		}
};
int main()
{
	Datatype d;
	d.print(99,"nik");
	d.print("nik",99);
}
 

