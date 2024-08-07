//3. Write a program to print tables
#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter any nunber : ";
	cin>>num;
	cout<<"the multiplication of : "<<num<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}
