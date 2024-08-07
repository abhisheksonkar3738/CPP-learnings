/* 2-->Two numbers are entered through the keyboard. Write a program to find
the value of one number raised to the power of another. */
#include<iostream>
using namespace std;
main()
{
    int n1,n2,r=1;
    cout<<"enter any three number : ";
    cin>>n1>>n2;
    for(int i=1;i<=n2;i++)
    {
    	
//    		for(int j=i;j<=n1;j++)
//    		{
//    			r=r*n1;
//			}
           r=r*n1;
	}
		cout<<"the result is : "<<r;	
}



