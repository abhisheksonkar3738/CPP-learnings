// lavel 1 
//============================================================================
/*

Q.1) WAP to create a array of n integer elements. And  perform following operations.
a) display
b) display in reverse order.
c) display alternate elements from starting index.
d)display elements which are multiple of 7
e) add them all and show result
f) find avg.

*/




/*

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a range : ";
	cin>>n;
	int arr[100];
	cout<<"Enter a number : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the real number is : "<<endl;
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	
	}
	cout<<endl;
	cout<<"the revers order is : "<<endl;
	
		for(int i=n;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"the alternate element : "<<endl;
			for(int i=0;i<n;i=i+2)
	{
		cout<<arr[i]<<" ";
	
	}
	cout<<endl;
	cout<<"the number 7 multiplication : "<<endl;
	bool key=false;
	
			for(int i=0;i<n;i++)
	{
		if(arr[i]%7==0)
		{
				key==true;
		cout<<arr[i]<<" "<<endl;
		}
	
	}
	
	if(key==false)
	{
		cout<<"not multiplication number  7 : "<<endl;
	}
	int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		cout<<"the all element sammation : "<<sum<<endl;
}

*/



//====================================================================

//Q.3) WAP to find lowest and second lowest element in an array.

/*
#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,45,65};
    int lowest,slowest;
    if(arr[0]<arr[1])
    {
    	lowest=arr[0];
    	slowest=arr[1];
	}
	else
	{
	    lowest=arr[1];
		slowest=arr[0];	
	}
	for(int i=2;i<5;i++)
	{
		if(arr[i]<lowest)
		{
			slowest=lowest;
			lowest=arr[i];
		}
		if(arr[i]>lowest && arr[i]<slowest)
		{
			slowest=arr[i];
		}
	}
	cout<<lowest<<" "<<slowest;
}

*/




//=============================================================
//  Q.2) WAP to find highest and second highest element in an array.

/*

#include<iostream>
using namespace std;
int main()
{
	int arr[5]={12,4,4,45,6};
	int  high,shigh;
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
	cout<<high<<" "<<shigh;
}

*/



//================================================================

//Q.4) WAP to find highest and lowest element in an array.


/*

#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,max,min;
	cout<<"Enter the size of array element : ";
	cin>>n;
	cout<<"Enter the array of the element : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max>arr[i])
		{
			max=arr[i];
		}
	}
	
	min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min<arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"the maximum number is : "<<max<<endl;
	cout<<"the minimum number is : "<<min<<endl;
}

*/

//======================================================================================
//Q.5) WAP to find sum of all even element in an array.

/*

#include<iostream>
using namespace std;
int main(){
	int arr[10],n,esum,osum;
	cout<<"Enter a range : ";
	cin>>n;
	cout<<"Enter any element : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		 esum=0;
			 osum=0;
		if(arr[i]%2==0)
		{
			esum=esum+arr[i];
		}
		else
		{
			osum=osum+arr[i];
		}
	
	 
	}
	cout<<"the odd number sum : "<<osum<<endl;
	cout<<"the even number sum : "<<esum<<endl;
}


*/

//================================================================

//Q.7) WAP to count all odd element in an array, and display result.



#include<iostream>
using namespace std;
int main()
{
	int n,ocunt;
	int arr[100];
	cout<<"Enter a range : ";
	cin>>n;
	cout<<"enter the number : "<<endl;

int key;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the odd element array is : "<<endl;
	
		for(int i=0;i<n;i++)
	{
	    if(arr[i]%2!=0)
	    {
	    key=arr[i];	
	    	cout<<key<<" ";
		}
	}
}




//==================================================================================

/*

Q.8) WAP to create an array of names. And perform searching operation too of any key element,
If result is not found. display message not found otherwise display the indices where our key element is present.

*/

/*


#include<iostream>
using namespace std;
int main()
{
	int n;  
	int arr[100];
	cout<<"Enter a range : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	bool pre=true;
	int key;
	cout<<"Enter any number : ";
	for(int i=0;i<n;i++)
	{
		
		cin>>key;
		if(key==arr[i])
		{
			pre=false;
			cout<<"present number : "<<endl;
		}
	
	
		
	   
	}
}


*/


//==============================================================================



































































































/*


#include<iostream>
using namespace std;
int main(){

    int arr[] = {10, 67, 89, 78, 34, 2, 95};
    int n = sizeof(arr)/sizeof(arr[0]);

    int smallest = INT_MAX, largest = INT_MIN;

    for(int i=0; i<n; i++){ if(smallest > arr[i])
         smallest = arr[i];
       if(largest < arr[i])
         largest = arr[i];
    }

   cout<<smallest<<endl<<largest;
}

*/



