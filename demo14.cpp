// precedence_question    ->question-5;
#include<iostream>
using namespace std;
main()
{
	int a=12,b=10,c=1,d=4,e=2;
	int x=a-b/6*4||2>>5*6;            // left to right
	cout<<x;
}
