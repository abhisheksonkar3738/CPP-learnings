/*Write a c++ program to check whether a number is 3 digit or not.*/

#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	num>=100 && num<=999? cout<<"this number is three digit ":cout<<"not three digit : "<<endl;
}
