//write a pragram to determine wheather a number palindrom number or not ;
// 121=> its revers is same :- 121;       343=343;       898=898;
#include<iostream>
using namespace std;
main()
{
	int num,temp,sum=0,last;
	cout<<"Enter any number : ";
	cin>>num;
	temp=sum;
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
		cout<<"no it is not : ";
	}
}

