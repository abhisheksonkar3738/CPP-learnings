// wap a HCF;
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter a two number : ";
	cin>>a>>b;
	
	int small;
	bool HCF_possible=false;
	if(a<b)
	{
	   small=a;	
	}
	else
	{
		small=b;
	}
	for(int i=small;i>=2;i--)
	{
		if(a%i==0 && b%i==0 )
		{
			cout<<"HCF : "<<i<<endl;
			HCF_possible=true;
			break;
		}
	}
	if(HCF_possible ==false)
	cout<<"No  HCF : ";
}
