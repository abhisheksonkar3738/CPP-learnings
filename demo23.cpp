// Write a C++ program to find maximum between three numbers.

#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter a three number : "<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
	     cout<<" A is greater : "<<a;
	}
	else if(b>c && b>a )
	{
		cout<<" B is greater : "<<b;
	}
	else if(c>a && c>b)
	{
		cout<<" C is greater : "<<c;
	}
	
	
}
