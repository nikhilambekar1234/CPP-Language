//2-Copy the content from one file into another file.

//1-Open file and count the character, words and lines present in file.

#include<iostream>

using namespace std;
int main()
{
	FILE *f,*f1;
	char ch;
	f=fopen("data.txt","r");
	f1=fopen("data1.txt","w");
	
	while(1)
	{
		ch=fgetc(f);
	    if(ch==EOF)
	    {
	    	break;
		}
		fputc(ch,f1);
		
	}
	fclose(f);
	fclose(f1);

}
