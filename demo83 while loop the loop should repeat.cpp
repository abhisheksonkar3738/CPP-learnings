/* Write a loop that asks the user to enter two numbers.
 The numbers should be added and the sum displayed.
  The loop should ask the user whether he or she wishes to perform the operation again. If so, 
the loop should repeat; otherwise it should terminate. */
#include<iostream>
using namespace std;
main()
{
	int num1,num2;
    string choice="yes";
    while(choice=="yes")
    {
    	cout<<"Enter any two number : ";
    	cin>>num1>>num2;
    	cout<<"Add : "<<num1+num2<<endl;
    	cout<<"Do u want to continue type 'yes' pr any other for exit : ";
    	cin>>choice;
    	
    	//==========   advance  ==========
    	if(choice=="yes")
    	{
    		cout<<"please go on ......\n";
		}
		else
		{
			cout<<"thank u for using our service : ";
		}
	}
	
}
