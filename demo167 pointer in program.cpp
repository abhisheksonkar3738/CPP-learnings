#include<iostream>
using namespace std;
void point_in_pro(int *num)
{
	*num=*num+10;
}
int main()
{
	int num=10;
	point_in_pro( &num);
	cout<<num;
}
