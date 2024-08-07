//5-->WAP to print all prime number in given range.
#include<iostream>
using namespace std;
main()
{
	int n1,n2,count;
	cout<<"Enter a range in prime number : ";
	cin>>n1>>n2;
	for(int i=n1;i<=n2;i++)
	{   count=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		 if(count==2)
        {
          	cout<<i<<" ";
           }
	}
  
}
