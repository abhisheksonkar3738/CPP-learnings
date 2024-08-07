//call by value and call by reference
//====================================
/*
Q.1)WAP to swap the value of 2 variable with each other 
using call by value and call by reference.
*/

/*

#include<iostream>
using namespace std;
   void call_value(int num1,int num2,int num3)
   {
   	      
   	   num3=num1;
   	   num1=num2;
   	   num2=num3;
   	   cout<<"num1 : "<<num1<<"\n"<<"num2 : "<<num2<<endl<<endl;
   }
   
   void call_ref(int &n1,int &n2,int n3)
   {
   	n3=n1;
   	n1=n2;
   	n3=n2;
   }
int main()
{

	int num1=10,num2=20,num3;
		call_value(num1,num2,num3);
	    call_ref(num1,num2,num3);
	    cout<<"n1 : "<<num1<<"\n"<<"n2 : "<<num2;
}

*/


//==========================================================
/*

Q.2)WAP to manipulate the following string as
s="we are here to learn";
output="we$are$here$to$learn";// replace space with '$'

*/
#include<iostream>
using namespace std;
string call_ref(string &s)
{
	for(int i=0;i<=s.size();i++)
	{
		if(i == ' ')
		{
			i='&';
		}
	}
}
int main()
{
	string s="we are here to leran";
	cout<<s;
	call_ref(s);
	cout<<s;
}

























//=======================================================
/*
a) by call by value method :
parameter : string
return :string
*/
/*

#include<iostream>
using namespace std;
 string call_value11(string name)
 {
 	name="abhishek sonkar : ";
 	return name;
 }


int main()
{
	string name;
   cout<<call_value11(name);	
}
*/



//=================================================================

/*
b) by call by reference method :
parameter : string
return :void
*/
//#include<iostream>
//using namespace std;
//
// string call_ref(string &naam)
//{
//	naam="sandeep sonkar : ";
//	return naam;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	string name;
//	name="abhishek sonkar : ";
//	cout<<"before function call : "<<name<<endl;
//	call_ref(name);
//	cout<<"after function call : "<<name;
//}

















