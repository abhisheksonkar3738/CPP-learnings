#include<iostream>
using namespace std;
main()
{
	int a=90, b=23, c=87;
	c++;
	a=b+c++;
	cout<<a<<endl;
	a=--c;
	cout<<a<<endl;
	b=a+b;
	cout<<b;
}
