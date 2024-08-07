//Q.5) WAP to find sum of all even element in an array.
#include<iostream>
using namespace std;
int main()
{
      int num[5]={8,2,4,3,5};
      int sum=0;
      for(int i=0;i<5;i++)
      {
      	
      	if(num[i]%2==0)
      	{
      		sum=sum+num[i];
		  }
	  }
	  cout<<sum;
}
