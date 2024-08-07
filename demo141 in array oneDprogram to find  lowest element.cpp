// write a program to find height and lowest element find 
#include<iostream>
using namespace std;
int main()
{
	int marks_student[8]={33,2,34,45,65,76,3,7};
	int lowest=marks_student[0];
	for(int i=1;i<8;i++)
	{
		if(marks_student[i]<lowest)
		{
			lowest=marks_student[i];
		}
	}
	cout<<"the lowest number is : "<<lowest;
}
