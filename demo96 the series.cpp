/*Q.3>Write a program in C++ to calculate the sum of the series 
(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n). 
*/
#include<iostream>
using namespace std;
main()
{
	int num,sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i<num)
	{
			cout<<"("<<i<<"*"<<i<<")"<<"+";
	}
		else
	{
			cout<<"("<<i<<"*"<<i<<")"<<"=";
	}
		sum=sum+i*i;
	}
	cout<<sum;
}
