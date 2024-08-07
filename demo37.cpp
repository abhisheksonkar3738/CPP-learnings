/*
Write a  program to determine eligibility for admission to a professional course based on the following criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=190  
 */
#include<iostream>
using namespace std;
main()
{
	int mark,math,phy,chem;
	cout<<"enter a mark of math and physic and chemestry : ";
	cin>>math>>phy>>chem;
	mark=math+phy+chem;
	if(math>=65 && phy>=55&& chem>=50 && mark>=190  )
	{
		cout<<"eligible for addmission : ";
	}
	else
	{
		cout<<"not eleigible for addmision : ";
	}
	
}

	
