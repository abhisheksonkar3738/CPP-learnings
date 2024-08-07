//Q.6) WAP to find sum of all odd element in an array.
#include<iostream>
using namespace std;
int main()
{
	int num[5]={1,23,3,4,8};
    int sum=0;
    for(int i=0;i<5;i++)
    {
    	if(num[i]%2!=0)
    	{
    		sum=sum+num[i];
		}
	}
     
     cout<<"odd number sum : "<<sum;
}

//==========================================================================
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num[5]={1,23,3,4,8};
//    int esum=0,osum=0;
//    for(int i=0;i<5;i++)
//    {
//    	if(num[i]%2!=0)
//    	{
//    		esum=esum+num[i];
//		}
//		else
//		{
//			osum=osum+num[i];
//		}
//	}
//     
//     cout<<"odd number sum : "<<esum<<endl;
//     cout<<"the even number sum is : "<<osum;
//}
