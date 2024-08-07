//having parameter  having return
//--------------------------------

/*
1>WAP to create a function namedaverage that is created to find out the average of 5 numbers 
parameter -->5 number
return --->string (a message success)
*/


//
//#include<iostream>
//using namespace std;
//
//string namedaverage11(int n1,int n2, int n3, int n4, int n5)
// {
//         int sum=0,ave;
//         sum=n1+n2+n3+n4+n5;
//         ave=sum/5.0;
//         cout<<ave<<endl;
//         return "success";
//           
// }
//int main()
//{
//      string msg=namedaverage11(1,2,3,4,5);
//    cout<<msg;
//}



//=========================================================
/*
2>-->Write a program to find the factorial of any number entered by user
parameter -->int
return --->int (or long long in case of higher number) i,e result
*/

/*

#include<iostream>
using namespace std;
int fact(int num)
{
	int fact=1;
	for(int i=num;i>=1;i--)
	{
		if(i>1)
		cout<<i<<"*";
		else
		cout<<i<<"=";
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int num;
	cout<<"Enter any number : ";
	cin>>num;
	
   cout<< fact(num);
}

*/

//==================================================================
/*
3-->Write a program that prompts the user to input an integer and then 
outputs the number with the digits reversed.
parameter -->int
return --->int 
*/

/*

#include<iostream>
using namespace std;
int rev1(int num)
{
	int last,sum=0,temp;

	while(num>0)
	{
		last=num%10;
		sum=sum*10+last;
		num=num/10;
	}
		temp=sum;
	return temp;
	
}
int main()
{
	int num;                                            
	cout<<"Enter any number : ";
	cin>>num;                    
		cout<<rev1(num);
//		cout<<rev1;
}

*/




//=========================================================================
/*

4->WAP to print whether a number is armstrong number or not
parameter -->int
return --->string (a message "yes" or "no")
*/

/*

#include<iostream>
using namespace std;
     string arms(int num)
     {
     	int last,sum=0,temp;
     	temp=num;
     	while(num>0)
     	{
     	     last=num%10;
			 sum=sum+last*last*last;
			 num=num/10;	
		 }
     	if(sum==temp)
     	{
     		return "yes";
		 }
		 else
		 {
		 	return "no ";
		 }
	 }
int main()
{
    int num;
	cout<<"Enter any number : ";
	cin>>num;
	string res=arms(num);
	cout<<res;	
}

*/


//======================================================================================
/*
5->WAP to print whether a number is palindrome number or not
parameter -->int
return --->string (a message "yes" or "no")
*/


#include<iostream>
using namespace std;
   string palin(int num)
   {
   	  int last,sum=0,temp;
   	  temp=num;
   	  while(num>0)
   	  {
   	  	last=num%10;
   	  	sum=sum*10+last;
   	  	num=num/10;
		 }
		 if(temp==sum)
		 {
		 	return "yes";
		 }
		 else
		 {
		 	return "no ";
		 }
   }
int main()
{
    int num;
	cout<<"Enter any number : ";
	cin>>num;
	string res=palin(num);
	cout<<res;	
}





//===========================================================================================

//===========================================================================================




/*
1>WAP to concatenate name and surname of a user having one space
between them
parameter -->name,surname
return --->no return 
*/
/*

#include<iostream>
using namespace std;
void fullname( string name,string surname)
{
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter surname : ";
	cin>>surname;
	cout<<name<<" "<<surname;
}
int main()
{
	string name,surname;
	
  fullname(name,surname);	
}

*/


//===========================================================================
/*
2-->Write a program that ask the user to input a positive integer. 
It should then print the multiplication table of that number.

parameter -->int
return --->no return 
*/
/*


#include<iostream>
using namespace std;
void table1(int num)
{
	cout<<"Enter a positive integer : ";
	cin>>num;
	for(int i=1;i<=10;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
}
int main()
{
	int num;
	table1(num);
}

*/

//=====================================================================
/*
3-->Write a program that ask the user two input . 
print the multiplication table of that range of numbers(nesting)

parameter -->int,int(range)
return --->no return
*/
/*

#include<iostream>
using namespace std;
void ratable(int num1,int num2)
{
	cout<<"Enter a start table number : ";
	cin>>num1;
	cout<<"Enter a end table number : ";
	cin>>num2;
	for(int i=num1;i<=num2;i++)
	{
		cout<<"the multiplication of : "<<num1<<endl;
		for(int j=1;j<=10;j++)
		{
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
	}
}
int main()
{
   int num1,num2;
   ratable(num1,num2);	
}

*/

//====================================================================
/*
4-->WAP to print all prime number in given range. 
parameter -->int,int(range)
return --->no return
*/


/*

#include<iostream>
using namespace std;
void prime_number( int num1,int num2)
{
	int count=0;

     for(int i=num1;i<=num2;i++)
     {
     	if(num1%i==0 && num1>=num2)
     	{
     		count++;
		 }
	
	 }
	 	 if(count==2)
		 {
		 	cout<<"it is prime number : ";
		 }
		 else
		 {
		 	cout<<"it is not prime number : ";
		 }
}
int main()
{
	int num1,num2;
	cout<<"start the number : ";
	cin>>num1;
	cout<<"End the number : ";
	cin>>num2;
	prime_number( num1, num2);
}

*/


//-----------same question ------------------
//#include<iostream>
//using namespace std;
//void prim1()
//{
//	int num;
//	cout<<"Enter any number : ";
//	cin>>num;
//	bool is_prime1=true;
//	for(int i=0;i<=num/2;i++)
//	{
//		if(num%i==0)
//		{
//			is_prime1=false;
//			break;
//		}
//	}
//	if(is_prime1==true)
//	{
//		cout<<"prime number : ";
//	}
//	else
//	{
//		cout<<"it is not prime number : ";
//	}
//}
//int main()
//{
//	prim1();
//}

//==================================================================================
/*
5-->WAP to print all armstrong number in given range.
parameter -->int,int(range)
return --->no return
*/
//#include<iostream>
//using namespace std;
//  void palindrom(int nu)
//  {
//  	for(int i=1;i<=100;i++){
//  	int sum=0,last,te;
//  	int nu=i;
////  	cout<<"Enter any number : "<<endl;
////  	cin>>num;
//  	 te=nu;
//  	while(nu>0)
//  	{
//  	last=nu%10;
//	  sum=sum*10+last;
//	  nu=nu/10;	
//	  }
//	  
//	  if(te==sum)
//  {
//  	cout<<te<<endl;
//  }
//  }
//  
//  } 
//int main()
//{
//	int num;
//	palindrom(int nu);
//}

























