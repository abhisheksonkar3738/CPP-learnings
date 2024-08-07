// write a program to find height and lowest element find 
#include<iostream>
using namespace std;
int main()
{
	int marks_student[8]={34,23,56,89,67,4,57,23};
	int high=marks_student[0];
	for(int i=1;i<8;i++)
	{
		if(marks_student[i]>high)
		{
		     high=marks_student[i];	
		}
	}
	cout<<"the marks is : "<<high<<endl;
}
