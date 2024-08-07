/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>
using namespace std;
main()
{
	int salary,year=5;
	cout<<"Enter your salary : ";
	cin>>salary;
	cout<<"Enter a year : ";
	cin>>year;
	double emp;
	if(year>=5)
	{
		emp=salary*5/100;
		cout<<"net bonus : "<<emp;
	}
	else
	{
		cout<<"salary : "<<salary;
	}
	
}
