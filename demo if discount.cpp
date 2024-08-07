#include<iostream>
using namespace std;
int main()
{
	int total,amt;
	
	cout<<"Enter your amount : ";
	cin>>amt;
	if(amt>=0 && amt<=2000)                                     
	{
		total=amt*0/100;
		cout<<"discount is : "<<total;
	}
	else if(amt>=2001 && amt<=5000)
	{
		total=amt*5/100;
		cout<<"discount is : "<<total<<endl;
	}
	else if(amt>=5001 && amt<=10000)
	{
		total=amt*10/100;
		cout<<"discount is : "<<total<<endl;
		
	}
	else if(amt>10000)
	{
		total=amt*15/100;
		cout<<"discount is  : "<<total<<endl;
	}
}
