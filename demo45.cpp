/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/
#include<iostream>
using namespace std;
int main()
{
	int qty;
	cout<<"Enter your quantity : ";
	cin>>qty;
	int cost=100;
	int totalcost;
	totalcost=qty*cost;
	if(totalcost>=1000)
	{
		double discount=totalcost*10/100;
		cout<<"total discount : "<<discount<<endl;
		cout<<"total is : "<<totalcost-discount;
	}
}
