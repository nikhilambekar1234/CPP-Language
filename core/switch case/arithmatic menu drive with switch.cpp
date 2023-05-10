//3-accept two num and create menu for arithmetic operation like 1=addition,2-sub,3-mult,4-div,5-mode.

#include<iostream>
using namespace std;
int main()
{
	int a,b,op;
	float div;
	
	cout<<"enter two num:";
	cin>>a>>b;
	cout<<"enter\n1=add\n2-sub\n3-mult\n4-div\n5-mode\n";
	cin>>op;
	
	switch(op)
	{
		case 1:
			cout<<"add = "<<a+b;
			break;
			
		case 2:
		    cout<<"sub = "<<a-b;
			break;
			
		case 3:
		    cout<<"mult = "<<a*b;
			break;
			
		case 4:
			div=(float)a/b;
		    cout<<"div = "<<div;
			break;
			
		case 5:
		    cout<<"mode = "<<a%b;
			break;
			
		case 6:
			default :
		    cout<<"invalid op";					
	}
	
	
}
