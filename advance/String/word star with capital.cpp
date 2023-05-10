//14- KdN info tech=>Kdn Info Tech

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]="KdN info tech";
	int i,j;

	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122 && i==0)
		{
			str[i]=str[i]-32;
		}
		else
		{
			if(str[i]>=65 && str[i]<=90 && i!=0)
			{
				str[i]=str[i]+32;
			}
		}
	   	if(str[i]==' ')
		{
			i++;
			j=i;
			if(str[i]>=97 && str[i]<=122 &&j==i)
			{
				str[i]=str[i]-32;
			}
			else
			{
				if(str[i]>=65 && str[i]<=90 && j!=i)
		    	{
			    	str[i]=str[i]+32;
		    	}	
			}
		}
	}
	cout<<str;
}
