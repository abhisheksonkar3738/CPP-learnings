/* 1:- Write a program that reads a set of integers, and then prints the sum of 
the even and odd integers.*/
  
#include<iostream>
using namespace std;
main()
{
	int n,num,sum=0,even=0,odd=0,i;
	cout<<"Enter a rang  : ";
	cin>>n;

	while(i<n)
	{ 
	   cout<<"Enter any number : ";
	   cin>>num;
	   sum=sum+num;
		if(num%2==0)
		{
			even=even+num;
		    
		}
		else
		{
		    
		    odd=odd+num;
		}
		i++;
	}
	cout<<"summation : "<<sum<<endl;
     cout<<"average : "<<sum/(float)n<<endl;
	cout<<"the sum of even is : "<<even<<endl;
	cout<<"the sum of odd is : "<<odd<<endl;
}
