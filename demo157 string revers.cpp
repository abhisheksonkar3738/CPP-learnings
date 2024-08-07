// wap to display the string revers order;

// str="my name is abhishek";
//output= kehsihba si eman ym;
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	string str;
//    cout<<"Enter string : ";
////    cin>>str;
////    cout<<str.size()-1;
//      getline(cin,str);
//    for(int i=str.size()-1;i>=0;i--)
//    {
//    	cout<<str[i];
//	}
//
//}


//function of string===>

/*

#include<iostream>
using namespace std;
int main(){
	
	string str="apple";
	
	str.push_back('i');
	str.push_back('v');
	str.append("is good");
	str=str+"is good";
	cout<<str;
}

*/




//=====================================================
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	string str,rev="";
//	cout<<"Enter string : ";
//	getline(cin,str);
//	for(int i=str.size()-1;i>=0;i--)
//	{
//		rev.push_back(str[i]);
//	}
//	cout<<rev;
//}



//=================================================================================

// palindrom check number : 

//#include<iostream>
//using namespace std;
//int main()
//{
//	string str[4]={"abcdcba","mom","master","nitin"};
//	
//	for(int i=str.size()-1;i>=0;i--)
//	{
//		if(str.size()>3)
//		{
//			cout<<str[i]<<" ";
//		}
//	}
//	
//	
//}

//--------
/*


#include<iostream>
using namespace std;
int main()
{
	string str,rev;
	string name[4]={"abcdcba","mom","pineapply","nitin"};
	for(int i=0;i<4;i++)
	{
		str=name[i],rev="";
		for(int j=str.size()-1;j>=0;i--)
		{
			rev.push_back(str[j]);
		}
		if(str==rev && str.size()>3){
			cout<<str<<endl;
		}
	}
}


*/
//==============================================================

// revers order in concat

/*

#include<iostream>
using namespace std;
int main()
{
	string str="india",rev="";
	for(int i=str.size();i>=0;i--)
	{
		rev=rev+str[i];
	}
	cout<<rev;
}
*/

//==============================================
// space count in paragraph;

/*

#include<iostream>
using namespace std;
int main()
{
	int count=0;
	string str="abhishek is good boy";
	for(int i=0;i<=str.size()-1;i++)
	{
		if(str[i]==' ')
		{
			count++;	
		}
	}
	cout<<count;
	
}

*/

//=======================================
//Q:- i is assing in $ ;
/*

#include<iostream>
using namespace std;
int main()
{
//	int count=0;
	string str="abhishek is good boy";
	for(int i=0;i<=str.size()-1;i++)
	{
		if(str[i]=='i')
		{
//			count++;	
        str[i]='$';
		}
	}
	cout<<str;
	
}
*/


//=============================================
// lower to upper case;
/*

#include<iostream>
using namespace std;
int main()
{
	char ch='a';
	ch=toupper(ch);
	cout<<ch;
}

*/


//==========================================
//-> isupper case

//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch='a';
//	bool a =isupper(ch);
//	cout<<a;
//}
//

//==============================================================

//find method question
//#include<iostream>
//using namespace std;
//int main(){
//	string str="apply is good";
//	cout<<"size--->"<<str.size()<<endl;
//	cout<<"index-->"<<str.find('g');
//}
//

//-----------------------------------
/*

#include<iostream>
using namespace std;
int main(){
	string str="burger is good for healt";
    int index=str.find("formmm");  //  not found -1;
//    cout<<index;
//    int index=str.find("good");
//    str.replace(index,4,"bad");
    str.replace(10,4,"bad");
    cout<<str;
}
*/

//---------------------------------
// replace question find user input 

/*

#include<iostream>
using namespace std;
int main()
{
	string str="burger is good for health";
	cout<<str<<endl;
	string newstring ,oldstring;
	cout<<"Enter old and new : ";
	cin>>newstring>>oldstring;
	int size=oldstring.size();
//	cout<<size;
	int index=str.find(oldstring);
	str.replace(index,size,newstring);
	cout<<str;
	
	
}

*/
//=========================================================
/*


// erase function 
#include<iostream>
using namespace std;
int main()
{
	string str="burger is good for health";
	str.erase(7,2);
	cout<<str;
}


*/

//======================================================
// capacity function 
#include<iostream>
using namespace std;
int main()
{
	string str="burger";
	str.push_back('y');
	cout<<"string capacity : "<<str.capacity()<<endl;
	cout<<"string size : "<<str.size()<<endl;
	cout<<str;
	
//	string s="";
//	for(int i=1;i<=10;i++)
//	{
//		s.push_back('a');
//		cout<<s.size()<<"    "<<s.capacity()<<endl;
//		
//	}
}










