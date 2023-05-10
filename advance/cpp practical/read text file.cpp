//34. Write a C++ program to read a text file.   
#include<iostream>
using namespace std;  
int main( )  
{  
	FILE *fp ;  
	char ch ;  
	fp = fopen("data.txt","r");  
	while ( 1 )  
	{  
	ch = fgetc( fp );  
	if ( ch == EOF )  
	break ;  
	cout<<ch ; 
    }

}  

