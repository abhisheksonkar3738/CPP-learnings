
// sir task  => 123=1+2+3;
#include<iostream>
using namespace std;
main()
{
	int num,sum=0,last;
	cout<<"Enter any number : ";
	cin>>num;
	
	
	while(num>0)
	{
	    last=num%10;
		sum=sum+last;
		num=num/10;	
	}
cout<<sum<<endl;
}
