/*Write a program that accepts marks (out of 100) of five subjects from user and
 calculate the sum then calculate percentage? Display message according 
 to following condition:
percentage >=60 Grade A
percentage >=50 Grade B
percentage >=40 Grade C
percentage  <40 Grade D  */

#include<iostream>
using namespace std;
main()
{
int per;
cout<<"Enter your percentage : ";
cin>>per;
if(per>=60 && per<=100)
{
	cout<<"Grade A : ";
}	
if(per>=50 && per<60)
{
	cout<<"Grade B : ";
}
if(per>=40 && per<50)
{
	cout<<"Grade C : ";
}
if(per<40)
{
	cout<< "Grade D : ";
}
else
{
	cout<<"invalid choice : ";
}
}

