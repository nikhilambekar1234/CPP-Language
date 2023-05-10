//14. Write a program in C++ to sort in assending an array using Pointer.

#include<iostream>
using namespace std;
int fun(int n, int *ptr)
{
	int i,j,temp;
	cout <<"assending arr:\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
			    temp=*(ptr+i);
			    *(ptr+i)=*(ptr+j);
			    *(ptr+j)=temp;
			}
		}
		cout<<*(ptr+i)<<endl;
	}
}
int main()
{
	int a[]={5,2,9,3,4,6,4},n=7;
	
	fun(n,a);
} 
