//9. Write a program to find sum of all natural numbers between 1 to n
#include<iostream>
using namespace std;
main()
{
	int num ,sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		cout<<i<<ends<<endl;
		sum=i+sum;
	}
	cout<<"total sum : "<<sum;
}
