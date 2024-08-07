/*Write a program to calculate whether a character is vowel or consonant.*/
#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"Enter a charcter : ";
	cin>>ch;
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<"vowel : ";
	}
	else
	{
		cout<<"consonant : ";
	}
	
}
