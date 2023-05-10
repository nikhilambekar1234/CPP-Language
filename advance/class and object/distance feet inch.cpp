//12. Add two distances in inch-feet by creating a class named 'AddDistance'.

#include<iostream>
using namespace std;
class AddDistance
{
	int feet,inch;
	
	public:
		void data(AddDistance d1,AddDistance d2)
		{
			cout<<"enter first distance:\n";
			cin>>d1.feet>>d1.inch;
			cout<<"enter second distance:\n";
			cin>>d2.feet>>d2.inch;
			
			feet=d1.feet+d2.feet;
			inch=d1.inch+d2.inch;
			feet=feet+(inch/12);
			inch=inch%12;
			
			cout<<"feet = "<<feet<<endl;
			cout<<"inch = "<<inch<<endl;
		}
		
};
int main()
{
	AddDistance d1,d2,d3;
	d3.data(d1,d2);

}
