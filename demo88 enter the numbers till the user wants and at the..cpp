
/*4:- Write a program to enter the numbers till the user wants and at the end the program
should display the largest  entered..*/
#include<iostream>
using namespace std;
main()
{
	int n,num ,large=INT_MIN;
	cout<<"enter range";
	cin>>n;
	int i=1;
	
//	char choice='y';
//	while(i<=n)
    while(n>=0)
	{
    cout<<"Enter any number : ";
	cin>>num;
	cout<<num<<endl;
//	cout<<"if you want to continue enter numbers type y for ye or any other charcter for no";
//	cin>>choice;

	
	if(large<=num)
	{
		large=num;
	}
//	i++;
    n--;
	} 
	cout<<"the large number is : "<<large;
}
