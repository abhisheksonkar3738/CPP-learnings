/* Q.1>WAP to take input n from the user.

if n is positive,display A to Z characters
                         (ascending order)
if n is negative,display z to a  characters
                         (descending order)
if n is zero,display all vowels
                         (a,e,i,o,u)
                         
*/
#include<iostream>
using namespace std;
main()
{
	int num;
		cout<<"Enter any number : ";
         	cin>>num;
	char ch;
	
	string choice="yes";
	while(choice=="yes")
	{
	   if(num>0)
	   { 
	  
	   		for(ch='A'; ch<='Z';ch++)
	   		{
	   			cout<<ch<<ends;
	   			
			   }
			   cout<<endl;
		   }
		  
           else if(num<0)
         {
         
         	for(ch='z';ch>='a';ch--)
         	{
         		cout<<ch<<ends;
			 }
			 cout<<endl;
         	
		 }
		 else {
		 	cout<<"a e i o u"<<endl;
		 }
		  cout<<"Enter a continue process is type 'yes ' otherwise no is exit : ";
		   cin>>choice;	
//       break;
	}
//   cout<<n<<ends;
}





//=========================
/*
#include<iostream>
using namespace std;
main()
{
	int num;
		cout<<"Enter any number : ";
         	cin>>num;
	char ch;
	


	
	   if(num>0)
	   { 
	  
	   		for(ch='A'; ch<='Z';ch++)
	   		{
	   			cout<<ch<<ends;
	   			
			   }
			   cout<<endl;
		   }
		  
           else if(num<0)
         {
         
         	for(ch='z';ch>='a';ch--)
         	{
         		cout<<ch<<ends;
			 }
			 cout<<endl;
         	
		 }
		 else {
		 	cout<<"a e i o u"<<endl;
		 }

}
*/
