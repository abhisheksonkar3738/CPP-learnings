//17. Write a program to calculate HCF of Two given number
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter a first number : ";
	cin>>a;
	cout<<"Enter a second number : ";
	cin>>b;
	for(int i=1;i>0;i++)

	{
		if(i%a==0 && i%b==0)
          if(a%b==0 )
		{
			cout<<"LCM : "<<i;
			break;
		}
	}
}
