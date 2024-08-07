/* Write a program to read the value of an integer m and display the message "ok" when m is larger than 0,
display the message "bye" when m is 0 and display the message "done" when m is less than 0.*/
#include<iostream>
using namespace std;
main()
{
	int m;
	cout<<"the value of m  : ";
	cin>>m;
	if(m>0)
	{
		cout<<"ok : ";
	}
	else if(m==0)
	{
		cout<<"bye : ";
	}
	else if(m<0)
	{
		cout<<"done : ";
	}
}
