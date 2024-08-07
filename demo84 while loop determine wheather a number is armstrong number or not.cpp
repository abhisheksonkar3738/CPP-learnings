// write a program to determine wheather a number is armstrong number or not ?
// =>there is quabic number other digit qube and sum all digit qubic value  
    //153=  1^3 + 5^3 + 3^3
       // 153=153;

#include<iostream>
using namespace std;
main()
{
	int num,temp,sum=0,last;
	cout<<"Enter test number : ";
	cin>>num;
	temp=num;
	while(num>0)
	{
		last=num%10;
		sum=sum+last*last*last;
		num=num/10;
		
	}
	if(sum==temp)
	{
		cout<<"armstrong : ";
	}
	else
	{
		cout<<"No : ";
	}
}
                                                                            

