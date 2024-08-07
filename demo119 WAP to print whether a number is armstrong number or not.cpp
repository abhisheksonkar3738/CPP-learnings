//6-->WAP to print whether a number is armstrong number or not

/*

#include<iostream>
using namespace std;
main()
{
	int num,last,sum=0,temp;
	cout<<"Enter any number : ";
	cin>>num;
	temp=num;
	for(int i=num;i>=0;i=i+10) 
      {
      	last=num%10;                // 153%10 last=3;
      	sum=sum+last*last*last*last;    //sum=0+27;sum=27;
      	num=num/10;             //153/10 num=15
      //	cout<<"w";
	  }
	if(temp==sum)
	{
		cout<<"armstrong number : ";
	}
	else
	{
		cout<<"not armstrong : ";
	}
	
}

*/



//==================================================
#include<iostream>
using namespace std;
main()
{
	int num,temp,sum=0,last;
	cout<<"Enter any number : ";
	cin>>num;
	temp=num;
	while(num>0)
	{
		last=num%10;
		sum=sum+last*last*last;
		num=num/10;
	}
	if(temp==sum)
	{
		cout<<"Armstrom number : ";
	}
	else
	{
		cout<<"not armstrom : ";
	}
}














