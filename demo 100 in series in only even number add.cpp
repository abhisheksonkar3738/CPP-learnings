// wap in series in only even number add : = 12345:- 2+4=6;
#include<iostream>
using namespace std;
main()
{
	int num,sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
			if(i<num)
			{
				cout<<i<<"+";
			}
			
		}
		else
			{
				cout<<i<<"=";
			}
	}
	cout<<sum;
}
