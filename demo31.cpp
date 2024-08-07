/* Write a program to Take values of length and breadth of a rectangle from user ,also
 Take value of side of a square from user ,and check which area is greater.*/
 
#include<iostream>
using namespace std;
main()
{
   int length,breadth;
   int s;
   cout<<"the value of length and breadth  : "<<endl;
   cin>>length>>breadth;
   cout<<"Enter radius : "<<endl;
   cin>>s;
   double arearec;
   arearec=length*breadth;
   cout<<"the area of rectangle is : "<<arearec<<endl;
   double areasq;
   areasq=s*s;
   cout<<"the area of square is : "<<areasq<<endl;
   if(arearec>areasq)
   {
   	cout<<"greater of area is rectangle : " <<arearec;
   }
   else
   {
   	cout<<"the area of square greater : "<<areasq;
   }
   
}
