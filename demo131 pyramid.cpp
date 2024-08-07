/* pyramid pattern

     *
    ***
   *****
  *******
 *********

*/

#include<iostream>
using namespace std;
main()
{
	int star=1;
	for(int i=5;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=star;k++)
		{
			cout<<"*";
		}
		star=star+2;
		cout<<endl;
	}
}
