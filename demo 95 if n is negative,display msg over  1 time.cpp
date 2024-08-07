/* Q.2>WAP to take input n from the user.

if n is positive,display msg "repeat" n times in new line.
if n is negative,display msg "over"  1 time

*/
#include<iostream>
using namespace std;
main()
{
	int  num;
//		cout<<"Enter a chioce of any operator number  : ";
//		cin>>n;
	string choice="yes";
	while(num>0)
	{
			cout<<"Enter any number : "<<endl;
         	cin>>num;
         if(num>0)
         {
         
         	cout<<"repeat : "<<endl;
		 }
		 else
		 {
		 	cout<<"over : "<<endl;
		 }
     	
	}
//	cout<<"over ";
	

}
