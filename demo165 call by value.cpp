#include<iostream>
using namespace std;
void call_by_value(int num)
{
	num=num+10;
//	cout<<num<<endl;
	
}
int main()
{
	int num=10;                   //=> does not change in main function 
	cout<<num<<endl;
	call_by_value(num);
	cout<<num;
}
