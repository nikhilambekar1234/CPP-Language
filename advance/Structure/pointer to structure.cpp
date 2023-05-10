/* 18. Write a program in C to show the usage of pointer to structure. 
Expected Output :
 John Alter from Court Street  */
 
#include<iostream>
#include<string.h>
using namespace std;
struct address
{
	char name[20];
	char place[20];
};
int main()
{
	struct address s ;
	struct address *ptr=&s;
	
	strcpy(s.name,"john alter");
	strcpy(s.place,"court street");
	cout<<(*ptr).name<<" from "<<(*ptr).place<<endl;
}
 

