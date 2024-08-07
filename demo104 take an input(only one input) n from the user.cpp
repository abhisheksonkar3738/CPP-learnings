/*WAP to display result according to following condition:
1)take an input(only one input) n from the user.

2)if n is a even, display all even number from 
range 1 - 40.
eg: n = 14 or n= 36 or any other even
output:2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 

3)if n is a odd, display all odd number from 
range 1 - 40.
eg: n = 11 or n= 343 or any other odd
output:1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39

4)other then this
display message "no match"
*/
#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	if(num%2==0)
	{
		cout<<" the number is even number : "<<num<<endl;
		for(int i=2;i<=40;i=i+2)
		{
			cout<<i<<ends;
		}
		
	}
	  else if(num%2!=0)
	   {
		cout<<"this number is odd : "<<num<<endl;
		for(int i=1;i<=40;i=i+2)
		{
			cout<<i<<ends;
		}
   	}
   	else{
   		cout<<"no match number : ";
	   }
	
}














