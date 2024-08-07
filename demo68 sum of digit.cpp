//15. write a program to sum of its Digits
#include<iostream>
using namespace std;
main()
{
	int num ,sum=0;
	cout<<"Enter any digit : "<<endl;
	for(int i=1;i<=5;i++)
	{
		cin>>num;
		sum=num+sum;
	}
	cout<<"total sum : "<<sum;
}
