/*
Create a class called "Vehicle" which contains data members registration number and fuel type 
Make getdata() function to input data value. 
Create class "two-Wheeler" from vehicle which contains data member?s distance and mileage 
Make getdata() function to input data. 
Use overloading techniques for getdata() function and display the information with fuel used.
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Vehicle
{
	int regno;
	char ftype[20];
public:
	void getdata()
	{
		cout<<"\nEnter Registration no, Fuel type \n";
		cin>>regno>>ftype;
	}
	void display()
	{
		cout<<"\nRegistration no : "<<regno<<endl;
		cout<<"Fuel type : "<<ftype<<endl;
	}
};

class wheeler : public Vehicle
{
	float dist;
	float milage;
public:
	void getdata()
	{
		Vehicle :: getdata();
		cout<<"\nEnter Distance, Milage\n";
		cin>>dist>>milage;
	}
	void display()
	{
		Vehicle :: display();
		cout<<"\nDistance : "<<dist<<endl;
		cout<<"Milage : "<<milage<<endl;
	}
};

int main()
{
	wheeler w;

	w.getdata();
	w.display();

	getch();
	return 0;
}


/*OUTPUT:
DISTANCE:25
MILAGE:35.5
Registration no : 4
Fuel type : petrol
*/
