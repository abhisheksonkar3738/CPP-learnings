//Q.3) WAP to find lowest and second lowest element in an array.
#include<iostream>
using namespace std;
int main()
{
	int marks_student[8]={23,34,45,6,34,12,98,3};
	int lowest;
	lowest=marks_student[0];
	for(int i=1;i<8;i++)
	{
		if(marks_student[i]<lowest)
		{
			lowest=marks_student[i];
		}
	}
	cout<<lowest;
}
