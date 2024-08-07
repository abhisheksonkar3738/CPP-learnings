/*Write a program to calculate smallest number out of given three numbers.*/
#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter three number : "<<endl;
	cin>>a>>b>>c;
	if(a<b && a<c)
	{
		cout<<a<<endl;
	}
	else if(b<a && b<c)
	{
		cout<<b<<endl;
	}
	else if(c<a && c<b)
	{
		cout<<c;
	}
}
