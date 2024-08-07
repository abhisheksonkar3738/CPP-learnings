

/* 2:- Write a loop that asks the user to enter two numbers. 
The numbers should be added and the sum displayed.
 The loop should ask the user whether he or she wishes to perform the operation again. 
 If so, the loop should repeat;otherwise it should terminate.  */
 
#include<iostream>
using namespace std;
main()
{  
    
	int num1,num2;
	string choice="yes";
	while(choice=="yes")
	{
		cout<<"Enter two number : "<<endl;
		cin>>num1>>num2;
		cout<<num1+num2<<endl;
		cout<<"do u want to continue type 'yes ' any other for exit : ";
		cin>>choice;
	}
	if(choice=="yes")
	{
		cout<<"please go on ......\n";
	}
	else
	{
		cout<<"thank u using for our services : ";
	}
}
