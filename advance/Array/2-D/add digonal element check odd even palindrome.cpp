//9-accept matrix from user make addition of all diagonal element 
//and check the addition is even or not and if the addition is even
//then check result is palindrome or not 
//and if the addition is odd then print the square matrix of given matrix

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],i,j,sum=0,temp,rem,rev=0,n;
	
	cout<<"enter element:"<<endl;
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cin>>arr1[i][j];
		}
	}
	cout<<"yout arr1:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"addition of digonal element:"<<endl;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(i==j||i+j==2)
    		{
    			sum+=arr1[i][j];
			}
		}
	}
	cout<<"sum = "<<sum<<endl;
	if(sum%2==0)
	{
		cout<<"even sum"<<endl;
		temp=sum;
		n=sum;
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(rev==temp)
		{
			cout<<"palindrome"<<endl;
		}
		else
		{
			cout<<"not palindrome\n";
		}
	}
	else
	{
		cout<<"odd sum";
		cout<<"square of arr1:\n";
	    for(i=0;i<3;i++)
	    {
		   for(j=0;j<3;j++)
		   {
			  cout<<arr1[i][j]*arr1[i][j]<<" ";
	     	}
		   cout<<endl;
	    }
		
	}
	
}
    
	
	

