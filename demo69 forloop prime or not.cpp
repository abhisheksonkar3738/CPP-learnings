//16. write a program to Check Whether a Given Number is Prime or Not
#include<iostream>
using namespace std;
main()
{
    int num ,count=0;
    cout<<"Enter any number : ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {  
       
    	if(num%i==0)
    	{
    	    count++;  //1+1=2	
		}
		
	}
	if(count==2)
		{
			cout<<num;
			
		}
		else
		{
			cout<<"not prime number : ";
		}
	
}
