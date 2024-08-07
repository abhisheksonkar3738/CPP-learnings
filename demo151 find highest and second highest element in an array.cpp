//Q.2) WAP to find highest and second highest element in an array.
#include<iostream>
using namespace std;
int main()
{
	int arr[5]={23,2,34,54,8};
	int high,shigh;
	if(arr[0]>arr[1])
	{
		high=arr[0];
		shigh=arr[1];
	}
	else
	{
		high=arr[1];
		shigh=arr[0];
	}
	for(int i=2;i<5;i++)
	{
		if(arr[i]>high)
		{
			shigh=high;
			high=arr[i];
			
		}
		if(arr[i]<high && arr[i]>shigh)
		{
			shigh=arr[i];
		}
	}
	cout<<"the highest and second array number : "<<high<<" & "<<shigh<<endl;
	cout<<"the highest and second array number : "<<shigh<<" & "<<high;
}
