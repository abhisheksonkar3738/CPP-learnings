/*Write a program to calculate area of different Shapes based on users
 choice S, C or R (like s for square, c for circle, and r for rectangle).*/
#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"enter s for square area, r for rect and c for circle area :";
	cin>>ch;
 const double PI=3.14;

 switch(ch)
 {
 	case 'r':{
 		double len,breadth;
 		cout<<"Enter a length : ";
 		cin>>len;
 		cout<<"Enter a breadth : ";
 		cin>>breadth;
 		double area =len*breadth;
 		cout<<"area of retnagle is : "<<area;
 	
	 }	
	 	break;
	 	case 's':{
 		double side;
 		cout<<"Enter a side of square : ";
 		cin>>side;
 		double area =side*side;
 		cout<<"area of square is : "<<area;
 	
	 }	
	 	break;
	 		case 'c':{
 		double radius;
 		cout<<"Enter radius of circle : ";
 		cin>>radius;
 		double area =PI*radius*radius;
 		cout<<"area of circle is : "<<area;
 	
	 }	
	 	break;
	 	default: cout<<"invalid choice : ";
}
}
