


#include<iostream>
using namespace std;
main()
{
	int num=90;
	
//	int test=num++;    //  firstly assign the value of num to test
	                  //test=num   test=90
	                  //then increment  it by 1;
	                
					
	int test = ++num;   // first inrement the value of num by 1
	                   //num=91;
					   //then assighn it to rest test=91.  
    cout<<test;
	cout<<endl;
	cout<<num;
	
}
