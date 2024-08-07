/*Pattern-1

*
* *
* * *
* * * *
* * * * *


#include<iostream>
using namespace std;
main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
}

*/

//=========================================================
/*

Pattern-2
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5



#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}


*/

//==============================================================================
/*
Pattern-3
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

#include<iostream>
using namespace std;
main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

*/

//=========================================================
/*
Pattern-4
* * * * *
* * * *
* * *
* *
*



#include<iostream>
using namespace std;
main()
{
	for(int i=5;i>=1;i--)
	{
	for(int j=1;j<=i;j++)
	{
		cout<<"* ";
	}
	cout<<endl;
	}
}

*/

//=============================================
/*
Pattern-5
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1



#include<iostream>
using namespace std;
main()
{
   for(int i=5;i>=1;i--)
   {
   	for(int j=1;j<=i;j++)
   	{
   		cout<<j<<" ";
	   }
	   cout<<endl;
	   }	
}

*/


//================================================

/*

Pattern-6
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

*/

#include<iostream>
using namespace std;
main()
{
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}





