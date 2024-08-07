#include<iostream>
using namespace std;
main()
{
	int num1;
	int num2;
	char value;
	cout<<"enter a first number : ";
	cin>>num1;
	cout<<"what u want : ";
	cin>>value;
	cout<<"enter a second number : ";
	cin>>num2;
	switch(value)
	{
		case'+':
		cout<<"addition is : "<<num1+num2<<endl;
		break;
		case'-':
		cout<<"subtraction is : "<<num1-num2;
		break;
		case'*':
		cout<<"multiply is : "<<num1*num2;
		break;
		case'/':
		cout<<"division is : "<<num1/num2;
		break;
		default : 
		cout<<"invalid process: ";
			
	}
}
