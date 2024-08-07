/*20. Write a program to find number and sum of all integer between 100 and 200 
which are divisible by 9.*/
#include<iostream>
using namespace std;
main()
{
	int sum;
//	cout<<"Enter any number : ";
//	cin>>num;
	for(int i=100;i<=200;i++)
	{
	   if(i%9==0)
	   {
	   	cout<<i<<endl;
	   	sum=sum+i;
		   }	
	}
	cout<<"total divisible number : "<<sum;
}
