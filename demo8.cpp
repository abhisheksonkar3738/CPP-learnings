// increament decreament
#include<iostream>
using namespace std;
main()
{
	int x=5, y=5, z;
	x=++x; y=--y;
	++y;
	z=x+ ++x;
	cout<<z;
	return 0;
}
