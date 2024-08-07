//  length of character in pointer;
//#include<iostream>
//using namespace std;
//int main()
//{
//	char msg[]="abhishek";
////	cout<<msg[3];
//     int count;
//     char *ptr=msg;                  // array is itself os address 
//     while(*ptr!='\0')
//     {
//     	count++;
//     	ptr++;
//     	
//	 }
//	 cout<<"the number of character : "<<count;
//}
//



//========================================================================
// refrance
//#include<iostream>
//using namespace std;
//int main()
//{
//	int number1=1000,number2=200;
//	int &ref=number1;
//	cout<<ref<<endl;
//	ref=300;
//	cout<<number1<<endl;
//	cout<<ref<<endl;
//}

#include<iostream>
using namespace std;
int main()
{
	int number1=100, number2=200;
	int &ref=number1;
	cout<<ref<<endl;
	ref=300;
	cout<<number1<<endl;
	cout<<ref<<endl;
	ref=number2;
	cout<<ref;
}












