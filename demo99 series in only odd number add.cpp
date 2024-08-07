// wap in series in only odd number add : = 12345:- 1+3+5=6;
#include<iostream>
using namespace std;
main()
{
	int num,sum=0;
	cout<<"enter a number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
			if(i<num)
			{
				cout<<i<<"+";
			}
			else
			{
				cout<<i<<"=";
			}
		}
	}
	cout<<sum;
}
