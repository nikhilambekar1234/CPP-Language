//4-create the number gasing game with three chances pass / fail;

#include<iostream>
using namespace std;
int main()
{
	int num=1234,i,j=1;
	
	kdn :
		cout<<"enter num:";
		cin>>i;
		
		if(i==num)
		{
			cout<<"congratulation\nyou are pass\n";
		}
		else 
		{
			j++;
			if(j<=3)
			{
			    goto kdn;	
			}
			else
			{
				cout<<"sorry\n you are fail\n";
			}
			
			
		   
		}
	
		
		
}
