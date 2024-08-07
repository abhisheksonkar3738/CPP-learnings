//4. Write a program to print reverse tables
#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	cout<<"the multiplication of : "<<num<<endl;
	for(int i=10;i>=1;i--)
	{
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}
