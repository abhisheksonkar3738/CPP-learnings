#include<iostream>
using namespace std;
void increment_10(int &n){
	n=n-10;
}
int main()
{
	int number=12;
	incretment_10(number);
	cout<<number<<endl;
}
