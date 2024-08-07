// wap to find the lowest digit in a number n 

#include<iostream>
using namespace std;
main()
{
	int num,last;
	cout<<"Enter number : ";
	cin>>num;
	int lowest=9;
	while(num>0)
	{
		last=num%10;
		if(lowest<last)
		{
		   lowest=last;
		}
		num=num/10;
		
	}
    	cout<<lowest;
}
