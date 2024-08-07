/* 18. Write a program to enter the numbers till the user wants and at the end 
it should display the count of positive, negative and zeros entered  */
#include<iostream>
using namespace std;
main()
{
	int num,p=0,ne=0,z=0;
	int n;
	cout<<"Enter a range : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter a number : ";
		cin>>num;
		if(num>0)
		{
			p=p+1;
		}
	    else if(num<0)
		{
			ne=ne+1;
		}
		 else if(num==0)
		{
             z=z+1;
		}
	}
	cout<<"positive number : "<<p<<endl;
	cout<<"negative number : "<<ne<<endl;
	cout<<"zero : "<<z;
}
