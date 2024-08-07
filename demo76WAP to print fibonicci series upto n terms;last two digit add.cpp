// //WAP to print fibonicci series upto n terms; =>last two digit add 
#include<iostream>
using namespace std;
main()
{
	int n,n1=0,n2=1,n3;
	cout<<"Enter any number : ";
	cin>>n;
	cout<<n1<<ends<<n2<<ends;
	for(int i=2;i<=n-2;i++)
	{
		n3=n1+n2;
		cout<<n3<<ends;
		n1=n2;
		n2=n3;
	}
}
