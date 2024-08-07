//11. Write a program to find sum of all odd numbers between 1 to n
#include<iostream>
using namespace std;
main()
{
	int num,sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
			sum=sum+i;
		}
	}
	cout<<"total all odd number is : "<<sum;
}
