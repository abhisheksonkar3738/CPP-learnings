// wap to find the sum of n number and display result :  
#include<iostream>
using namespace std;
main()
{
	int n ,num,sum=0,even=0,odd=0,e,o;
	cout<<"Enter range : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		cout<<" Enter  a num : ";
		cin>>num;
		sum=sum+num;
		if(num%2==0)
		{
			even=even+num;
			e=e+1;
		}
		else if(num%2!=0)
		{
		     odd=odd+num;
		     o=o+1;
		}
	}
	cout<<"summation : "<<sum<<endl;
	cout<<"average : "<<sum/(float)n<<endl;
	cout<<"even sum : "<<even<<endl;
	cout<<"odd sum : "<<odd<<endl;
	cout<<"count of even number : "<<e<<endl;
	cout<<"count of odd number : "<<o<<endl;
}
