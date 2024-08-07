
/*Write a program to enter the numbers till the user wants and at the
end the program
should display  smallest number entered.  */
#include<iostream>
using namespace std;
main()
{
	int n,num,small=INT_MAX;
	cout<<"Enter a rang : ";
	cin>>n;
	int i=1;
	while(i<=n)
	{
		cout<<"Enter number : ";
		cin>>num;
		cout<<num<<endl;
		i++;
		if(small>=num )
		{
		   small=num;	
		}
		
	}
	cout<<"samll number is : "<<small<<endl;
}
