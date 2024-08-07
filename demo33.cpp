/* Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.
 if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%.*/

#include<iostream>
using namespace std;
int main()
{	

	int rupees,pen;
	cout<<"Enter a rupees : ";// 40
	cin>>rupees;
	cout<<"Enter a pen : ";//20
	cin>>pen;
	int total=rupees*pen;
	double discount;
	if(total>1000)
	{
		discount=total*20.0/100;
		cout<<"discunt is : "<<discount<<endl;
		cout<<"total is : "<<total-discount;
	}
	
	else 
	{
			discount=total*10.0/100;
	cout<<"discunt is : "<<discount<<endl;
		cout<<"total is : "<<total-discount;
	}	
}
