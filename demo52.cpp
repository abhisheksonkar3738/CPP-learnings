//Write a program to check whether a number is even or odd using switch-case.

#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	switch(num%2==0)
	{
		case 1:
			cout<<"even";
			break;
			case 0:
				cout<<"odd :";
				break;
	}
}
