#include<iostream>
using namespace std;
void call_by_value(int &num)
{
	num=num+10;
	
}
int main()
{
   int num=10;
   	call_by_value(num);
   	cout<<num;
}
