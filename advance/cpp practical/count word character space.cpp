//9-Accept string from user and count character,number,special symbol,spaces,word,present in string.
//9. Write a C++ program to count the number of words and characters in a given text. 

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int n=0,c=0,sym=0,spa=0,w=0,i;
	cout<<"enter string:\n";
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		c++;
		if(str[i]==' ')
	//	if(str[i]==32)
		{
			spa++;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
			n++;
		}
		else if(str[i]>=0 && str[i]<=47||str[i]>=58 && str[i]<=64||str[i]>=91 && str[i]<=96||str[i]>=123 && str[i]<=127)
		{
			sym++;
		}
	}
	cout<<"space = "<<spa<<endl;
	cout<<"character = "<<c<<endl;
	cout<<"number = "<<n<<endl;
	cout<<"symbol = "<<sym<<endl;
	cout<<"word = "<<spa+1<<endl;
}

