// wap to find the heighest digit in a number n 

#include<iostream>
using namespace std;
main()
{
	int num,last;
	cout<<"Enter number : ";
	cin>>num;
	int high=0;
	while(num>0)
	{
		last=num%10;
		if(high<last)
		{
			high=last;
		}
		num=num/10;
		
	}
    	cout<<high;
}
