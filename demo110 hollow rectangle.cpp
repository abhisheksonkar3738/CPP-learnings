// hollow rectangle ;
/*

********
*      *
*      *
*      *
********

*/
#include<iostream>
using namespace std;
main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=8;j++)
		{
			if(i==1 || i==5 || j==1 || j==8)
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
