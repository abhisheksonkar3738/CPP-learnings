/*Write a program to calculate whether character is in lowercase or uppercase.*/
#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		cout<<"lowercase : ";
	}
	else
	{
		cout<<"uppercase : ";
	}
}
