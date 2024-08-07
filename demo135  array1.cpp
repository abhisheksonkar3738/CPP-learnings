//#include<iostream>
//using namespace std;
//main()
//{
//	int ar[]={34,89,76};
//	cout<<sizeof(ar)<<endl;
//	
//	int arr[4]={3,6,8};
//	cout<<sizeof(arr)<<endl;
//	
//	cout<<arr[1]<<endl;
//	
//	cout<<arr[10]<<endl;
//}

//==================================================================
//#include<iostream>
//using namespace std;
//main()
//{
//	int A[]={23,4,56,90,87,44,43,56};       //subscript operator;
//	int size=sizeof(A)/sizeof(A[0]);
////	cout<<size;
//	
//	//array value access+array declare -->[]
//	
////	cout<<A[3]<<endl;
//	A[3]=90000;
//	cout<<A[3];
//	
//}










//==========================


#include<iostream>
using namespace std;
main()
{
   int size;
   cout<<"Enter your size : ";
   cin>>size;
   int A[size];
   for(int i=0;i<size;i++)
   {
   	cout<<"Enter number : ";
   	cin>>A[i];
   	
   	
	   }
	   for(int i=0;i<size;i++)
	   {
	   	cout<<"Element at index : "<<i<<"  is  "<<A[i]<<endl;
		   }	
}







