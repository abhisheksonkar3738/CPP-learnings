/* Write a program to take input age of male or Female and check he/she is eligible for marriage or not.
 ask age and gender.  */
 
#include<iostream>
 using namespace std;
 main()
 {
 	int age;
 	string gender;
 	cout<<"enter a age : ";
 	cin>>age;
    cout<<"Enter a gender  : ";
    cin>>gender;
    
   if((gender == "Male" || gender=="male" ) && age>=21)
 	{
 		cout<<"eligible for marraige : ";
	 }
	 else if((gender=="Female" || gender=="female" )&& age>=18)
	 {
	 cout<<"eligible for marraige : ";
	 }
	 else
	 {
	 	cout<<"not eligible : ";
	 }
 	
	
 }
 
 
 
 
 //=====================================================================
// 
// #include<iostream>
// using namespace std;
// main()
// {
// 	int age;
// 	string male,female;
// 	cout<<"enter a age : ";
// 	cin>>age;
//// 	cout<<"Enter a gender : ";
//// 	cin>>male>>female;
// 	if(age>=21)
// 	{
// 		cout<<"eligible marraige : ";
//	 }
//	 else if(age>=18 )
//	 {
//	 	cout<<"eligible marraige : ";
//	 }
//      else
//      {
//      	cout<<"not eligible : ";
//	  }
//  } 
