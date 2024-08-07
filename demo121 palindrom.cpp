//8-->WAP to print whether a number is palindrome number or not
#include<iostream>
using namespace std;
main()
{
	int num,last,sum=0,temp;
	cout<<"Enter any number : ";
	cin>>num;
	temp=num;
	while(num>0)
	{
		last=num%10;
		sum=sum*10+last;
		num=num/10;
	}
	if(temp==sum)
	{
		cout<<"palindrome : ";
	}
	else
	{
		cout<<"not : ";
	}
}

