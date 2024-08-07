//7-->WAP to print all armstrong number in given range in power in math use  => user in input 
#include<iostream>
#include<cmath>
using namespace std;
main()
{
   int num,last,sum=0,temp,power=0;
   cout<<"Enter any number : ";
   cin>>num;
   temp=num;
   while(num>0)
   {
   	num=num/10;
   	power++;

   }
//   cout<<power;
   num=temp;
   while(num>0)	
   {
   	    last=num%10;
   	    sum=sum+pow(last,power);
   	    num=num/10;
   }
   if(temp==sum)
   {
   	cout<<sum;
   }
   
}
