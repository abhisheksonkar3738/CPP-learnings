/*Write a program to calculate whether year is leap year or not?*/
#include<iostream>
using namespace std;
main()
{
	int year;
	cout<<"Enter a year : ";
	cin>>year;
	if(year%4==0)
	{
		cout<<"leap year : ";
	}
	else
	{
		cout<<"not leap year : ";
	}
}
