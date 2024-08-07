//4-->WAP to print whether a number is prime number or not

/*

#include<iostream>
using namespace std;
main()

{
	int num,count=0,i;
	cout<<"Enter any number : ";
	cin>>num;
	while(i<=num)
	{
		if(num%i==0)
		{
			count++;
		
		}
       i++;
	}
	if(count==2)
	{
		cout<<"prime number : ";
		
	}
	else
	{
		cout<<"not prime number : ";
	}
}

*/
//==============================================================
#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"Enter any number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"prime number : ";
	}
	else
	{
		cout<<"not prime : ";
	}
}
