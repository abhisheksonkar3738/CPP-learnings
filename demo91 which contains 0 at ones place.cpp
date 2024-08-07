/* Write a program that reads a set of integers, and then prints only number 
which contains 0 at ones place ex:  */
#include<iostream>
using namespace std;
main()
{
	int n, num;
	cout<<"Enter range : ";
	cin>>n;
	while(n>0)
	{
		cout<<"Enter any number : ";
		cin>>num;
	
			if(num%10==0)
	{
		cout<<num<<endl;
	}
			n--;
	}

}
