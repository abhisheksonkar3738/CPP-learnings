/*Write a C++ program to read the age of a candidate and determine whether he is
 eligible to cast his/her own vote.*/

#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"enter a age : ";
	cin>>age;
    age>=18&& age<=150 ?cout<<age<<" elgible for vote ":cout<<age<<"  not eligible for vote : ";
}
