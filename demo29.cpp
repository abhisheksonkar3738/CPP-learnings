#include<iostream>
using namespace std;
main()
{
	int s,e;
	cout<<"enter s number : ";
	cin>>s>>e;
	if(s<e)
	{
		for(int i=s;i<=e;i++)
		{
			cout<<i<<endl;
		}
	}
	
		else if(s>e)
		{
		     for(int i=s; i>=e;i--)
			 {
			 	cout<<i<<endl;
				 }	
		}
		else
		{
			cout<<"same value : ";
		}
	

}
