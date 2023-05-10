//Write a C program to check whether an alphabet is vowel or consonant using switch case

#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"enter alphabet:\n";
	cin>>ch;
	
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
	   switch(ch)
	   {
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':	
		    cout<<"vowel";
			break;
			
	    default :
		    cout<<"consonant";
			break;							
	  }
   }
   else
   {
	 cout<<"invalid op";
   }
	
}
