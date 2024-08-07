// check the number is zero negative and positive
#include<iostream>
using namespace std;
main()
{
	int num1;
	cout<<"enter any number : ";
	cin>>num1;
	switch(num1>0)
	{
		case 0:
			switch(num1<0)
			{
				case 0:
					cout<<"zero number : ";
					break;
					
				case 1:
					cout<<"negative number : ";
					break;
					
			}
			break;
		
			case 1:
				cout<<"position  number : ";
				break;
	}
}
