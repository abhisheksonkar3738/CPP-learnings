#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cout<<"Enter any three number :"<<endl;
	cin>>num1>>num2>>num3;
	
	int greater;
	if(num1>=num2 && num1>=num3)
	{
		greater = num1;
	}
	else if(num2>=num1 && num2>=num3)
	{
		greater = num2;
	}
	else
	{
		greater = num3;
	}
	cout<<"The Greater number is :"<<greater<<endl;
}
