//7-->WAP to print all armstrong number in given range  => user in input :
#include<iostream>
using namespace std;
main()
{
	int n1,n2;
	cout<<"Enter start value : ";
	cin>>n1;
	cout<<"Enter ends value : ";
	cin>>n2;
	for(int i=n1; i<=n2; i++)
	{
		int num=i,last,sum=0,temp;
		temp=num;
		while(num>0)
		{
			last=num%10;
			sum=sum+last*last*last;
			num=num/10;
		}
		if(temp==sum)
		{
			cout<<sum<<ends;
		}
	}
}
