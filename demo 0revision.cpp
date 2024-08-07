#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char value;
	cout<<"Enter a first number : "<<endl;
	cin>>num1;
	cout<<"What u want : ";
	cin>>value;
	cout<<"Enter second number : "<<endl;
	cin>>num2;
	switch(value)
	{
		case '+':
			cout<<"addition is : "<<num1+num2<<endl;
			break;
			case'-':
				cout<<"subtraction is : "<<num1-num2<<endl;
				break;
				case'*':
					cout<<"multiply is : "<<num1*num2<<endl;
					break;
					case '%':
						cout<<"devision is : "<<num1/num2;
						break;
	}
}
