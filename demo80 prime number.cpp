// wap is prime number find ;
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter any number : ";
	cin>>n;
	bool is_prime=true;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			is_prime=false;
			break;
		}
	}
	if(is_prime==true)
	{
		cout<<"prime : ";
	}
	else
	{
		cout<<"not prime number : ";
	}
}
