//1/n + 2/n +3/n + 4/n + 5/n........n/n;
#include<iostream>
using namespace std;
main()
{
	double num;
	double sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i<num)
		{
			cout<<i<<"/"<<num<<" + ";
		}
		else
		{
			cout<<i<<"/"<<num<<" = ";	
		}
		sum=sum+i/num;
	}
	cout<<sum;
}
