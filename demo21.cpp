/* A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user. */
#include<iostream>
using namespace std;
main()
{
	int quantity;
	double totalcost;
	double discount;
	cout<<"Enter quantity : "<<endl;
	cin>>quantity;
	 totalcost=quantity*100;
	 if(totalcost>1000)
	 {
	 	discount=totalcost*10/100;
	 	cout<<"the total discount is : "<<discount<<endl;
	 	totalcost= totalcost-discount;
	 	cout<<"final amount after discount is : "<<totalcost;
	 }
	 else{
	 	cout<<"amount to pay : "<<totalcost<<endl;
	 }
}




//=======================================================
//#include <iostream>
//
//using namespace std;
//
//int main(){
//
//   int qty;
//
//   float discount = 0;
//
//   cout<<"Quantity: ";
//
//   cin>>qty;
//
//   int cost = qty * 100;
//
//if (cost > 1000)
// {       
//  discount=cost * 0.10; 
//         }
//
//   cout<<"Cost: "<<cost - discount;
//
//   return 0;
//
//}
