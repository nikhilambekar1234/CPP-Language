/*7. Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.*/

#include <iostream>
using namespace std;
class Apples
 {
  public:
    int a;
    int app ()
	 {
      cout<<"enter total apple";
      cin>>a;
      cout << "Number of Apples :" << a <<endl;
      
      return a;
    }
};

class Mangos
{
  public:
    int m;
    int man () 
	{
	  cout<<"enter total mango\n";
      cin >> m;
      cout << "Number of Mangos :" << m <<endl;
      
      return m;
    }
};

class Fruits : public Apples,public Mangos
{
  public:
   void cal (int a,int b)
    {
      cout << "Total Number of Fruits :" << a+b <<endl;
   }
};

int main() 
{
    Fruits obj;
    obj.app();
    obj.man();
    int p = obj.a;
    int q = obj.m;
    /*int p = obj.app();
      int q = obj.man();  */
    obj.cal(p,q);
    return 0;
}






