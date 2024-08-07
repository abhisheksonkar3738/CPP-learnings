/* 3:- Write a program to enter the numbers till the user wants and at the end it should display 
the count of positive, negative and zeros entered. */
#include<iostream>
using namespace std;
main()
{
	int n,num,ze=0,ne=0,p=0;
	cout<<"Enter a range : ";
	cin>>n;
	while(num<=n)
	{
		cout<<"Enter any number : ";
		cin>>num;
	    num++;
	    
		if(num>0)
		{
			p=p+1;
		}
		else if(num==0)
		{
			ze=ze+1;
		}
		else if(num<0)
		{
			ne=ne+1;
		}
			
	}
	cout<<"total of positive number  : "<<p<<endl;
		cout<<"total of zero number  : "<<ze<<endl;
			cout<<"total of negative number  : "<<ne<<endl;
	
}

