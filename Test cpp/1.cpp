#include<iostream>
using namespace std;
int main()
{
	FILE *f;
	int c=0,w=0,l=0;
	char ch;
	f=fopen("data.txt","r");
	
	while(1)
	{
		ch=fgetc(f);
	    if(ch==EOF)
	    {
	    	break;
		}
		c++;
		if(ch==' '||ch=='.')
		{
			w++;
		}
		if(ch=='.')
		{
			l++;
		}
	}
	fclose(f);
	cout<<"character = "<<c<<endl;
	cout<<"word = "<<w<<endl;
	cout<<"line = "<<l<<endl;
}
