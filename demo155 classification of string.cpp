///  string ----->  collection of characters
  
//  character-set=========
// { A-Z }
//   {a-z}
//   {0-9}
//  {spacial symbols }
//   { white space }
//   
//   
//   char=>'a'
//   string=>"a"
//   =>" "  [empty string]






/*

// classification of string  ;
#include<iostream>
using namespace std;
int main()
{
	char str1[]={'w','e'};
	string str2="abhishek";            //    "we"  // array of characters
	cout<<str1<<endl;                 // template,class(data-type)string;
	cout<<str2;
}

*/



//=========================================

/*

Classfication of String
char A[]={'w','e'}  // "we" // array of characters //    C-style = C-string
string B="abcd";  // template , class (Data-type) string



 C-style = C-string                       |            template , class (Data-type) string
                                          |
  Array of characters                     |                                                   
  ->fixed size                            |    ->dynamic size
  ->static creations                      |    ->dynamic creation                                               
                                          |                                                   
   represent : char[3]={'a','b','c'}      |   represent : string str1="abhay";
   => faster                                 =>slow;
*/

//=======================================================================================
/*

char A[2]={'w','e'};   //  "we" // array of characters
//char B[2]={'w','e','r'};  // error
char C[3]="we";  // error throw

*/

//============================================


/*

#include<iostream>
using namespace std;
int main()
{
	char name[6]={'r','a','d','h','a','\0'} ;     // '\0' null character

cout<<name;

char name2[11]="  abhishek";
cout<<name2;
}

*/


