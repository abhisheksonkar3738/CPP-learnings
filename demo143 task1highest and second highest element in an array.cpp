//Q.2) WAP to find highest and second highest element in an array.
#include<iostream>
using namespace std;
main()
{
	int marks_student[8]={12,34,56,44,23,7,87,88};
	int maxMarks=marks_student[0];
	for(int i=1;i<8;i++)
      {
      	if(marks_student[i]>maxMarks)        
      	{
      		maxMarks=marks_student[i];
      		
		  }
		  }	
		  cout<<maxMarks;
}
