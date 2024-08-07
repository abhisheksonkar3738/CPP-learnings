// Write a program to show day of week according to user input.
#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter a week number : ";
	cin>>num;
	switch(num)
	{
	case 1:
		cout<<"sunday : ";
		break;
		case 2:
		cout<<"monday : ";
		break;
		case 3:
		cout<<"tuesday : ";
		break;
		case 4:
		cout<<"wednesday : ";
		break;
		case 5:
		cout<<"thursday : ";
		break;
		case 6:
		cout<<"friday : ";
		break;
		case 7:
		cout<<"satuday : ";
		break;		
	}
	
}
