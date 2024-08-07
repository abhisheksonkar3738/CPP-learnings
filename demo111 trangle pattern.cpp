// wap pattern; triangle

#include<iostream>
using namespace std;
main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
		if(i==1||i==5|| j==1||j==5||i==j)
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
		}
		cout<<endl;
	}
}
