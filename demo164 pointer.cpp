#include<iostream>
using namespace std;
int main()
{
	int number=45;
	int *ptr=&number;
	cout<<"address of number : "<<ptr<<endl;
	cout<<"data at number : "<<number<<endl;
	cout<<"the data at number : "<<*ptr<<endl;    //.derefrance
	*ptr=*ptr+45;
//    *ptr=number+45;
	cout<<"the addition of number is : "<<*ptr<<endl;
	number=number+45;
	cout<<"the addition of number is : "<<number<<endl;
	
	
}
