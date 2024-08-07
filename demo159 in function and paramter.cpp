/*==================================================

#include<iostream>
using namespace std;
void add(int num1,int num2)
{
	cout<<"addition : "<<num1+num2<<endl;
}
int main()
{
    add(2,5);
}

*/



//==================================================================================

/* write a program to find the greatest number among three number using function ;
parameter three integer value;
return highest number;
*/

/*
#include<iostream>
using namespace std;
   int greatest(int num1,int num2,int num3)
   {
   	if(num1>num2 && num1>num3)
     	{  
   		return num1;
	   }
	   else if(num2>num1 && num2>num3)
	   {
	   	return num2;
	   }
	   else
	   {
	   	return num3;
	   }
	   
   }
int main()
{
	cout<<greatest(2,3,4);
//       int result=greatest(2,3,4);
//       cout<<result;
}

*/



//==================================================================================================
/*
 wap to concatenate the name and surname given by a user.
 
using function
paramter ->2 string
return ->1 string 
*/
/*

#include<iostream>
using namespace std;

string fullname(string,string);    // decaleration , prototype,signature;
int main()
{
	string name,surname;
	cout<<"Enter name and surname : ";
	cin>>name>>surname;         // actual parameter
	fullname(name,surname);
	string result=fullname(name,surname);
	cout<<"my full name is : "<<result;
//	cout<<fullname(name,surname);
}
string fullname(string n, string s){            // formal paramter;
	return n+" "+s;
}

*/

//===================================================================================
/*
 wap to display fibonacci series upto n .
 
using function
paramter ->1;
return ->void; 
*/
/*

#include<iostream>
using namespace std;
void fibo(int range)
{
	int n1=0,n2=1,n3;
	cout<<n1<<" "<<n2<<" ";
		while(1)
	{
      n3=n1+n2;
		if(n3<=range)
		{
			cout<<n3<<" ";	
		}
		else
		{
			break;	
		}
	
		n1=n2;
		n2=n3;
	}
}
int main()
{
  fibo(10);
}

*/


//===================================================================================
/* wap to create a function named is_prime in which is used determine prime number,
 if number is prime return true,
 otherwise return false 
 one integer paramter
*/

/*

#include<iostream>
using namespace std;
     bool is_prime(int n)
     {
     	int flag=false;
     for(int i=2;i<=n/2;i++){
	 	if(n%i==0)
	 	{
	 		flag=true;
		 }
		 if(flag==false)
		 {
		 	return true;
		 }
		 else
		 {
		 	return false;
		 }
	 }     	
	 }
int main()
{
    int num;
	cout<<"Enetr any number : ";
	cin>>num;
	bool result=is_prime(num);
	if(result==0)
	{
		cout<<"not prime number : ";
	}
	else
	{
		cout<<"prime number ";
	}
//	cout<<result;	
}

*/


//=================================================================================
// wap program calculater;

/*

#include<iostream>
using namespace std;
void cal(int num1,int num2)
{
	cout<<"the addition is : "<<num1+num2<<endl;
	cout<<"the subtraction is : "<<num1-num2<<endl;
	cout<<"the multiplication is : "<<num1*num2<<endl;
	cout<<"the devision is : "<<num1/num2<<endl;

}
int main()
{
   int num1,num2;
   cout<<"Enter a two number : ";
   cin>>num1>>num2;
   cal(num1,num2);
   	
}


*/

//=====================================================================
// array in function ;
/*
wap a program to find the highest number in a array  using function;
paramter array
parameter size
*/

#include<iostream>
using namespace std;
void highest(int A[],int n){
	int high=A[0];
	for(int i=0;i<n;i++)
	{
//		A[i]=A[i]+10;
      if(A[i]>high){
      	high=A[i];
	  }
	}
	cout<<"highest : "<<high<<endl;
}
int main()
{
	int arr[]={23,44,55,6,7,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	highest(arr,size);
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
}







