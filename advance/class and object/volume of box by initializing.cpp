//10. Write a program to print the volume of a box by creating a class named 'Volume'with an initialization list
// to initialize its length, breadth and height. (just to make you familiar with initialization lists)

#include<iostream>
using namespace std;
class Volume
{
	int length,breadth,height;
	public:
		Volume():length(7),breadth(4),height(2)
		{
			
		}
		int printvolume()
		{
			return length*breadth*height;
		}
};
int main()
{
	Volume vm;
	cout<<"volume of box = "<<vm.printvolume();
}
