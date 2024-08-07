/*WAP to display result according to following condition:
1)take an input(only one input) n from the user.

2)if n is a multiple of 7 ,display all multiple of 7 between
range 1 -100.
eg: n = 14 or n= 35 or any other multiple of 7
output: 7 14 21 28 35 42 49 56 63 70 77 84 91 98  

3)else if, n is a multiple of 11 ,display all multiple of 11 between
range 1 -100.
eg: n = 33 or n= 121 or any other multiple of 11
output: 11 22 33 44 55 66 77 88 99

4)other then this
display message "no match"
*/

#include<iostream>
using namespace std;
main()
{
	int  num;
	cout<<"Enter any number : ";
	cin>>num;
	if(num%7==0)
	{
		cout<<"the number is 7 is multipli : "<<num<<endl;
		for(int i=7;i<=100;i=i+7)
		{
			cout<<i<<ends;
		}
	}
	else if(num%11==0)
	{
		cout<<"the number is 11 is multipli : "<<num<<endl;
		for(int i=11;i<=100;i=i+11)
		{
			cout<<i<<ends;
		}
	}
	else
	{
		cout<<"no match number : ";
	}
	
}
















