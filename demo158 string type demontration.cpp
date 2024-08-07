/*

This all takes only one parameter that is the character to be checked.


isalpha() -->test alphabet 
Its return value is non-zero value if c is an alphabet, else it returns 0.

isupper() -->test uppercase 
Its return value is non-zero value if c is an uppercase, else it returns 0.

islower() -->test lowercase
Its return value is non-zero value if c is an lowercase, else it returns 0

isdigit() -->test digit
Its return value is non-zero value if c is an digit, else it returns 0

toupper():the toupper() function converts a lowercase alphabet to an uppercase alphabet
                  (if any)
tolower():the tolower() function converts a uppercase alphabet to an lowercase alphabet
                    (if any)
*/

//------------------------------------------------------------------------
//demonstration code -1


/*

# include <iostream>
using namespace std;
int main(){

	string str="india OUR 32543 country";
	char ch;
	cout<<"0 means false , non zero means true\n";
	for(int i=0;i<str.size();i++){
	     ch=str[i];
//	cout<< ch <<" isdigit :"<< isdigit(ch)<<"\t";
    cout<< ch <<" isalpha :"<< isalpha(ch)<<"\t";
//    cout<< ch <<" islower :"<< islower(ch)<<"\t";
//    cout<< ch <<" isupper :"<< isupper(ch)<<"\t";

    cout<<endl;
	}

}

*/


//-------------------------------------------------------------------------

////demonstration code -1 revision one by one 

//  isdigit question ;

/*

#include<iostream>
using namespace std;
int main()
{
	string str="my NAME is 12345 abhishek ";
	char ch;
	cout<<"0 means is false none zero means true : "<<endl;
	for(int i=0;i<str.size();i++)
	{
		ch=str[i];
		cout<<ch<<" isdigi : "<<isdigit(ch)<<endl;   // char is false=0 and intiger is true=1 print;
	}
}

*/

//------------------------------------------------------------------------


//  isalpha question ;

/*

#include<iostream>
using namespace std;
int main()
{
	string str="my NAME is 1234 abhishek ";
	char ch;
	cout<<"0 means is false and none zero means is ture :  "<<endl;
	for(int i=0;i<str.size();i++)
	{
		ch=str[i];
//		cout<<ch;
		cout<<ch<<" islapha : "<<isalpha(ch)<<"\t"<<endl;    //char is none zero =ture snd digit zero=0 false;
	}
}


*/



//---------------------------------------------------------------------------

//islower question ;

/*

#include<iostream>
using namespace std;
int main()
{
	string str="my NAME is 1234 abhishek ";
	char ch;
	cout<<"0 means is false and none zero means is ture : "<<endl;
	for(int i=0;i<str.size();i++)
	{
		ch=str[i];
//		cout<<ch;
		cout<<ch<<" islower : "<<islower(ch)<<endl;   // lower character is none zero=ture and uperr char is 0=false;
	}
}

*/


//-----------------------------------------------------------------

// isupper question 

/*


#include<iostream>
using namespace std;
int main()
{
	string str="my NAME is 1234 abhishek ";
	char ch;
	cout<<"0 means false and non zero is ture "<<endl;
	for(int i=0;i<str.size();i++)
	{
		ch=str[i];
		cout<<ch<<" isupper : "<<isupper(ch)<<endl;  // lowest char 0 =false and upper char none zero=ture;
	}
}

*/

//-----------------------------------------------------------------------------------


//demonstration code -2


/*

# include <iostream>
using namespace std;

	string str="india OUR 32543 country";
	char ch;
	cout<<"0 means false , non zero means true\n";
	for(int i=0;i<str.size();i++){
	     ch=str[i];
	cout<< ch <<" isdigit :"<< isdigit(ch)<<"\t";
    cout<< ch <<" isalpha :"<< isalpha(ch)<<"\t";
    cout<< ch <<" islower :"<< islower(ch)<<"\t";
    cout<< ch <<" isupper :"<< isupper(ch)<<"\t";

    cout<<endl;
	}

}

*/




//=============================================================================================================

//demonstration code -2

/*

# include <iostream>
using namespace std;


int main(){
	char ch='A';
	ch=toupper(ch);  // no changes
	cout<<ch<<endl;
	ch=tolower(ch);  // change upper to lower
	cout<<ch;	
}
*/

//-----------------------------------------------

// 1)WAP to count number of uppercase letters, and lowercase letter in a string s ,given by user.
/*

if s="apple IS"
upper: 2
lower: 5

2)WAP to count number of digits, and alphabet in a string s ,
given by user.

if s="apple 123"
alphabet: 5
digits: 3

*/
//---------------------
// 1:-

//if s="apple IS"
//upper: 2
//lower: 5

/*

#include<iostream>
using namespace std;
int main()
{
	string s="appleIS";
    int ucount=0;
    int locount=0;
    
	char ch;
	for(int i=0;i<s.size();i++)
	{
	      ch=s[i];
//	      cout<<ch<<endl;
	      if(ch==toupper(ch))
	      {
	    
	      	ucount++;
		  }

	}
	cout<<"the upper character is :  "<<ucount<<endl;
	for(int i=0;i<s.size();i++)
	{
		ch=s[i];
//		cout<<ch<<endl;
		if(ch==tolower(ch))
		{
			locount++;
		}
	}
	cout<<"the lower charcter is : "<<locount;
}
*/


//-----------------------------------------------------------------
/* 2)WAP to count number of digits, and alphabet in a string s ,
given by user.

if s="apple 123"
alphabet: 5
digits: 3

*/

/*

#include<iostream>
using namespace std;
int main()
{
	string s="apple 123";
	char ch;
	int dicount=0,alcount=0;
	for(int i=0;i<s.size();i++)
	{
		ch=s[i];
//		cout<<ch<<endl;
		if(isdigit(ch))
		{
		   dicount++;
		}
		if(isalpha(ch))
		{
			alcount++;
		}
	}
	cout<<"digits is : "<<dicount<<endl;
	cout<<"alpha count is : "<<alcount;
	
}
*/


//---------------------------------------------


//  3)WAP to swap the upper character to lower and vice-versa

//if s="Apple"
//output="aPPLE"


/*


#include<iostream>
using namespace std;
int main()
{
	string s="Apply";
	for(int i=0;i<s.size();i++)
	{
		if(isupper(s[i]))
		     s[i]=tolower(s[i]);
		else if(islower(s[i]))
		     s[i]=toupper(s[i]);
	}
	cout<<s;
}

*/


//------------------------------------------------------------------------
/*

4)WAP to Capitalize each word of a array names.
names={"ajay","rahul","ritu","raj"}
output={"Ajay","Rahul","Ritu","Raj"}

*/

//#include<iostream>
//using namespace std;
//int main()
//{
//	string names[4]={"ajay","rahul","ritu","raj"};
//     for(int i=0;i<4;i++)
//     {
//    
////     	cout<<names[i][0]<<endl;
//      names[i][0]=toupper(names[i][0]);
//      
//     	
//	 }
//	 for(int i=0;i<4;i++)
//	 {
//	 	cout<<names[i]<<" ";
//	 }
//}

//-------------------------------------------------------------
/*

5)WAP to create a new string s2,with the help of old string s1.
such that all digits are removed from it.

s1="abcdef1234pqrs"
s2="abcdefpqrs"
*/
//========================================


// all uperr charcater :
#include<iostream>
using namespace std;
int main()
{
		string names[4]={"ajay","rahul","ritu","raj"};
     for(int i=0;i<4;i++)
     {
    
//      names[i][0]=toupper(names[i][0]);

       for(int j=0;j<names[i].size();j++)
       {
       	names[i][j]=toupper(names[i][j]);
	   }
     	
	 }
	 for(int i=0;i<4;i++)
	 {
	 	cout<<names[i]<<" ";
	 }
}
