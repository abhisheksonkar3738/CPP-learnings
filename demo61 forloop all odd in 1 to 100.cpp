//8. Write a program to print all odd number between 1 to 100
#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<ends;
		}
	}
}
