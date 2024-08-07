//7-->WAP to print all armstrong number in given range  in power in math use  => 

#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	for(int i=100;i<=100000;i++)
	{
		int num=i,sum=0,last,length=0;
		
     	int	temp=num;
		while(num>0)
		{
			num=num/10;
			length++;
		}
//		cout<<length;
//	cout<<"enter any number : ";
//	cin>>num;	
	num=temp;
	while(num>0)
	{
		last=num%10;
		sum=sum+pow(last,length);
		num=num/10;
	}
	if(temp==sum)
	{
		cout<<temp<<endl;
	}
}

}
