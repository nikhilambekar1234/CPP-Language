/*9.We want to store the information of different vehicles. Create a class named Vehicle
 with two data member named mileage and price. Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating capacity
 and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, 
cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type.
 Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car
(i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) 
Do the same for a Bajaj and a TVS bike.
________________________________________
*/
#include<iostream>

using namespace std;
class Vehicle
{
	private:
		float mileage;
		float price;
		
	public:
	    Vehicle(float mileage,float price)
		{
			this->mileage=mileage;
			this->price=price;
		}
		virtual void display()
		{
			cout<<" mileage = "<<mileage<<endl;
			cout<<" price = "<<price<<endl;
		}	
};
class Car:public Vehicle
{
	private:
      	float ownershipCost;
    	int warrenty;
    	int seatingCapacity;
    	string fuelType;
    	
    public:
	    Car(float mileage,float price,float ownershipCost,int warrenty,int seatingCapacity,string fuelType):Vehicle(mileage,price)
		{
			this->ownershipCost=ownershipCost;
			this->warrenty=warrenty;
			this->seatingCapacity=seatingCapacity;
			this->fuelType=fuelType;
		}	
		void display()
		{
			cout<<" Car =>"<<"\n";
			Vehicle::display();
			cout<<" ownershipCost = "<<ownershipCost<<endl;
			cout<<" Warrenty = "<<warrenty<<endl;
			cout<<" seatingCapacity = "<<seatingCapacity<<endl;
			cout<<" fuelType = "<<fuelType<<endl;
		}
	
};
class Bike:public Vehicle
{
	private:
		int numberCylinders;
		int numberGears;
		string coolingType;
		string wheelType;
		float fueltankSize;
		
	public:
		Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price)
		{
			this->numberCylinders=numberCylinders;
			this->numberGears=numberGears;
			this->coolingType=coolingType;
		}
	    void display()
		{
			cout<<" Bike => "<<"\n";
			Vehicle::display();
			cout<<" numberCylinders = "<<numberCylinders<<endl;
			cout<<" numberGears = "<<numberGears<<endl;
			cout<<" coolingType = "<<coolingType<<endl;
		}	
		
};
class Audi:public Car
{
	private:
		string modelType;
		
	public:
	    Audi(float mileage,float price,float ownershipCost,int warrenty,int seatingCapacity,string fuelType):Car(mileage,price,ownershipCost,warrenty,seatingCapacity,fuelType)
		{
			this->modelType=" Audi ";
		}
		void display()
		{
			Car::display();
			cout<<" modelType = "<<modelType<<endl;
		}	
};
class Ford:public Car
{
	private:
		string modelType;
		
	public:
	    Ford(float mileage,float price,float ownershipCost,int warrenty,int seatingCapacity,string fuelType):Car(mileage,price,ownershipCost,warrenty,seatingCapacity,fuelType)
		{
			this->modelType=" Ford ";
		}
		void display()
		{
			Car::display();
			cout<<" modelType = "<<modelType<<endl;
		}
};
class Bajaj:public Bike
{
	private:
		string makeType;
		
	public:
	    Bajaj(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Bike(mileage,price,numberCylinders,numberGears,coolingType)
		{
			this->makeType=" Bajaj ";
		}
		void display()
		{
			Bike::display();
			cout<<" makeType = "<<makeType<<endl;
		}	
};
class TVS:public Bike
{
	private:
		string makeType;
		
	public:
	    TVS(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Bike(mileage,price,numberCylinders,numberGears,coolingType)
		{
			this->makeType=" TVS ";
		//	makeType=" TVS ";
		}
		void display()
		{
			Bike::display();
			cout<<" makeType = "<<makeType<<endl;
		}	
};
int main()
{
  	Audi caraudi1(10000,36000,29000,10,3,"petrol");
	Audi caraudi2(12000,40000,30000,12,4,"Disel");
	
	Ford carford1(11000,35000,28000,9,3,"petrol");
	Ford carford2(13000,42000,32000,14,5,"Disel");
	
	Bajaj bikebajaj1(16000,12000,1,1,"liquid");
	TVS biketvs1(19000,18000,2,4,"liquid");
	
	caraudi1.display();
	cout<<"\n";
	caraudi2.display();
	cout<<"\n";
	carford1.display();
	cout<<"\n";
	carford2.display();
	cout<<"\n";
	bikebajaj1.display();
	cout<<"\n";
	biketvs1.display();
	
}
