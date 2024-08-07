// write the program series :- 1-2+3-4+5-6......+n;
#include<iostream>
using namespace std;
main()
{
	int num,sum=0;
	cout<<"Enter a number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		
     if(i%2==1)
     {
     	cout<<i<<"-";
     	sum=sum+i;
     	 if(i<num)
     	 {
     	 	cout<<i<<"=";
		  }
	 }
	 else
	 {  
	    cout<<i<<"+";
	 	sum=sum-i;
	 }
	}
	cout<<" = "<<sum;
}
