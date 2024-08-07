/*Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include<iostream>
using namespace std;
main()
{
	int temp;
	cout<<"Enter a temperature : ";
	cin>>temp;
	if(temp==0)
	{
		cout<<"then very cold weather : ";
	}
	else if(temp>0 && temp<10)
	{
		cout<<"then very cold weather : ";
	}
	else if(temp>=10 && temp<20)
	{
		cout<<"then cold weather : ";
	}
	else if(temp>=20 && temp<30 )
	{
		cout<<" then Normal in Temp : ";
	}
	else if(temp>=30 && temp<40)
	{
		cout<<"then Its Hot : ";
	}
	else if(temp>=40)
	{
		cout<<" then Its Very Hot : ";
	}
}
