/*    wap to create a two dimentional array name as marks in which we store the marks of an students 
every student apear for three subject   */

//#include<iostream>
//using namespace std;
//int main()
//{
//	int A[4][3]={{34,45,2},{34,56,67},{24},{25,56}};
//	cout<<sizeof(A)<<endl;
//	cout<<A[3][1];
//}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"how many student are there in class : ";
	cin>>n;
	int marks[n][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
		   cout<<i<<j<<" : ";
		   cin>>marks[i][j];	
		}
	}
	
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<i<<j<<" : "<<marks[i][j];
//			cout<<"marks at index "<<i<<endl<<j<<" : ";
		}
		cout<<endl;
		
		}
		
}
