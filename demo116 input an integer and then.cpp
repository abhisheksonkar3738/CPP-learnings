/*3-->Write a program that prompts the user to input an integer and then 
outputs the number with the digits reversed. */

//#include<iostream>
//using namespace std;
//main()
//{
//   int num,sum,last;
//   cout<<"Enter any number : ";
//   cin>>num;
//     while(num>0)
//     {
//     	last=num%10;
//     	sum=sum*10+last;
//     	num=num/10;
//     	
//	 }
//	 cout<<"the reverse order is : "<<sum;
//}


//===============================
#include<iostream>
using namespace std;
main()
{
	int num,sum=0,last;
	cout<<"Enter number : ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		last=num%10;
		sum=sum*10+last;
		num=num/10;
	}
	cout<<"the revers order is : "<<sum<<endl;
	
}

