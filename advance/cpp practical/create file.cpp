//29. Write a C++ program to create a file. 

#include<iostream>

using namespace std;
int main()
{
	FILE *f1;
	f1=fopen("data1.txt","w");
	

	fclose(f1);

}
