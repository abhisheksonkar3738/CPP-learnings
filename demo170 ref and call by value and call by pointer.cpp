/* wap to demonstrate call by value and call by reference, by creating two f().
      great_zero()
      parameter=3 int
      return=void.
      
      find greatest number and assign
      main() -> display all 3 number.
      */
      
#include<iostream>

using namespace std;

void great_zero(int *num1,int *num2,int *num3){

	if(*num1>*num2 && *num2>*num3)
	{
		*num1=0;
		
	}
	else if(*num2>*num1 && *num2>*num3)
	{
		*num2=0;
	}
	else if(*num3>*num1 && *num3>*num2)
	{
		*num3=0;
	}
}

void great2_zero(int &num1, int &num2,int &num3)
{
	if(num1>num2 && num1>num3)
	{
		num1=0;
	}
	else if(num2>num1 && num2>num3)
	{
		num2=0;
	}
	else if(num3>num1 && num3>num2)
	{
	   num3=0;	
	}
}
int main()
{
		int num1=10,num2=40,num3=20;
//	cout<<"Enter any three number : "<<endl;
//	cin>>num1>>num2>>num3;

		great2_zero(num1, num2, num3);
	cout<<"num1 : "<<num1<<" num2 : "<<num2<<" num3 : "<<num3<<endl;
	
		great_zero(&num1, &num2, &num3);   // pointer
	cout<<"num1 : "<<num1<<" num2 : "<<num2<<" num3 : "<<num3<<endl;
	
	
}
