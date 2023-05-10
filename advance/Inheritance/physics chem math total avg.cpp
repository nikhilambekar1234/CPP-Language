/*/*8.We want to calculate the total marks of each student of a class in Physics,Chemistry
and Mathematics and the average marks of the class. The number of students in the class
are entered by the user. Create a class named Marks with data members
for roll number, name and marks. Create three other classes inheriting
the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks
in individual subject of each student. Roll number of each student will be generated automatically.*/

#include<iostream>
using namespace std;
class Physics;
class Chemistry;
class Mathematics;
class Marks
{		
	int roll;
	string name;
	int marks[3];
	public:
		Marks()
		{
			
		}
	Marks(int r,string n)
		{
			roll=r;
			name=n;
		}
		void display()
		{
			cout<<"Roll no = "<<roll<<endl;
			cout<<"Name = "<<name<<endl;
		}
	friend int gettotal(Marks,Physics,Chemistry,Mathematics);
	
};
class Physics:public Marks
{
	int mark;
	public:
		Physics(int mark)
		{
			this->mark=mark;
		}
		friend int getphy(Physics);
};
class Chemistry:public Marks
{
	int mark;
	public:
		Chemistry(int mark)
		{
			this->mark=mark;
		}
		friend int getchem(Chemistry);
};
class Mathematics:public Marks
{
    int mark;
	public:
		Mathematics(int mark)
		{
			this->mark=mark;
		}
		friend int getmath(Mathematics);	
};
int getphy(Physics p)
{
	return p.mark;
}
int getchem(Chemistry c)
{
	return c.mark;
}
int getmath(Mathematics m)
{
	return m.mark;
}
int gettotal(Marks ma,Physics p,Chemistry c,Mathematics m)
{
	int first=getphy(p);
	int second=getchem(c);
	int third=getmath(m);
	
	ma.marks[0]=first;
	ma.marks[1]=second;
	ma.marks[2]=third;
	
	int sum=0;
	
	for(int i=0;i<3;i++)
	{
		sum+=ma.marks[i];
	}
	return sum;
};
int main()
{
	int i,n,roll,phymark,chemmark,mathmark;
	string name;
	double totalsum=0.0;
	double avg=0.0;
	
	cout<<"total number of student in class\n";
	cin>>n;
	Marks marks[n];
	double total[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"enter roll num and name\n";
		cin>>roll>>name;
		
		Marks J(roll,name);
		marks[i]=J;
		cout<<"enter phy chem math marks\n";
		cin>>phymark>>chemmark>>mathmark;
		
		
		Physics p1(phymark);
		Chemistry c1(chemmark);
		Mathematics m1(mathmark);
		
		total[i]=gettotal(marks[i],p1,c1,m1);
	}
	for(i=0;i<n;i++)
	{
		marks[i].display();
		cout<<"Total marks = "<<total[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		totalsum+=total[i];
	}
	cout<<"total marks of the clss = "<<totalsum<<endl;
	cout<<"Average marks of the clss = "<<totalsum/n<<endl;
	
}

