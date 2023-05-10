//3-Merge two files into third file.

#include<iostream>

using namespace std;
int main()
{
	FILE *f2,*f1,*f3;
	char ch;
	f1=fopen("file1.txt","r");
	f2=fopen("file2.txt","r");
	f3=fopen("file3.txt","w");
	
	if(f1==NULL&&f2==NULL)
	{
		cout<<"file not found";
		exit(0);
	}
	while(1)
	{
		ch=fgetc(f1);
	    if(ch==EOF)
	    {
	    	break;
		}
		fputc(ch,f3);
		
	}
	fclose(f1);
	while(1)
	{
		ch=fgetc(f2);
	    if(ch==EOF)
	    {
	    	break;
		}
		fputc(ch,f3);
		
	}
	fclose(f2);
	fclose(f3);
}
