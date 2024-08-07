// 1/1 + 1/2 + 1/3 + 1/4 + 1/5.......1/n;
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(double i=1;i<=num;i++)
	{
		if(i<num)
		{
			cout<<1<<"/"<<i<<" + ";
		}
		else
		{
			cout<<1<<"/"<<i<<" = ";
		}
		sum=sum+1/i;
	}
	cout<<sum;
}
