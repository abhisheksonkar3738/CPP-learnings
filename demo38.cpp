/*Write a program that accepts a number from user and calculate whether it is positive or negative or zero*/
#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	if(num==0)
	{
		cout<<"zero :";
	}
    else if(num>=1)
    {
    	cout<<"positive number : ";
	}
	else
	{
		cout<<"negative number : ";
	}
}


