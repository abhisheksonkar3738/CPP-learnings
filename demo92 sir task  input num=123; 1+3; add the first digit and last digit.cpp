// sir task :- input num=123; => 1+3; add the first digit and last digit ;
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter any number : ";
	cin>>num;
	while(num>0)
	{
	    sum=sum+num%10;
		num=num/100;
	}
	cout<<sum;
}

