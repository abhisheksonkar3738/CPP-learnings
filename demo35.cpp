/* Write a program to A school has following rules for grading system: 
a. Below 25 - F 
b. 25 to 45 - E 
c. 45 to 50 - D 
d. 50 to 60 - C 
e. 60 to 80 - B 
f. Above 80 - A 

 Ask user to enter marks and print the corresponding grade.*/
 #include<iostream>
 using namespace std;
 main()
 {
 	int grad;
 	cout<<"Enter your number : ";
 	cin>>grad;
 	if(grad<25)
 	{
 		cout<<"F grad : ";
	 }
	 else if(grad>=25 && grad<45)
	 {
	 	cout<<"E grad  : ";
	 }
	 else if(grad>=45 && grad<50)
	 {
	 	cout<<"D grad : ";
	 }
	 else if(grad>=50 && grad<60)
	 {
	 	cout<<"C grad : ";
	 }
	 else if(grad>=60 && grad<80)
	 {
	 	cout<<"B grad : ";
	 }
	 else if(grad>=80 && grad<=100)
	 {
	 	cout<<"A grad : ";
	 }
	 else
	 {
	 	cout<<"invalid choice : ";
	 }
 }
