// //WAP to print fibonicci series upto n terms; =>last two digit multiply;
#include<iostream>
using namespace std;
main()
{
	int n ,n1=1,n2=2,n3;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<n1<<ends<<n2<<ends;
	for(int i=1;i<=n-2;i++)
	{
	   n3=n1*n2;
	   cout<<n3<<ends;
	   n1=n2;
	   n2=n3;
	   
	}
}
