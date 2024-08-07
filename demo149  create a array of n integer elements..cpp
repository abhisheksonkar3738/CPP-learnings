//Q.1) WAP to create a array of n integer elements. And  perform following operations.
//a) display
//b) display in reverse order.
//c) display alternate elements from starting index.
//d)display elements which are multiple of 7
//e) add them all and show result
//f) find avg.


#include<iostream>
using namespace std;
main()
{
   int num[5];
   int sum=0,key,count;
   cout<<"Enter any number : "<<endl;
   for(int i=0;i<5;i++)
   {
   	cin>>num[i];
   }
   for(int i=4;i>=0;i--)
   {
   	cout<<"the revers order : "<<num[i]<<endl;
   	count++;
   	if(count==2)
   	{
   	    cout<<num[i]<<" ";
   	
	   }
	   if(num[i]%7==0)
	   {
	   	key=key+num[i];
	   }
   }
   	cout<<"the alernate : "<<sum<<endl;
   cout<<"the number is 7 divide : "<<key;
}
