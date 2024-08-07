//One dimensional array level -2 question

//Q.9) WAP to create an array with n even elements. (hint: use while loop instead of for)

/*

#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[100];
	cout<<"Enter a range : "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	     cin>>arr[i];	
	}
	cout<<"the even element is : "<<endl;;
		for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		
	     cout<<arr[i]<<" ";	
	}
}

*/

//============================================================================================================
//Q.10) WAP to copy the elements of one array into another array.
/*


#include<iostream>
using namespace std;
int main(){
	int arr1[5]={1,2,3,4,5,};
	int arr2[5];
	
	
	for(int i=0;i<5;i++){
	   cout<<arr1[i]<<" ";
		arr2[i]=arr1[i];
		cout<<arr2[i]<<" ";
	    
	}
}

*/

//==========================================================================

//Q.11) WAP to display all unique elements of an array
/*

#include<iostream>
using namespace std;
int main()
{
	int A[5]={12,3,4,3,12};
	int B[5]={A[0]};
	cout<<A[0]<<" ";
	bool unique;
	int c=0;
     for(int i=0;i<5;i++)
	 {
	 	unique =true;
	    for(int j=0;j<=c;j++)
		{
			if(B[j]==A[i])
			{
				unique=false;
				break;
			}
			}	
	if(unique==true)
	{
		cout<<A[i]<<" ";
		c++;
		B[c]=A[i];
	}
}
//for(int i=0;i<=c;i++)
//{
//	cout<<B[i]<<" ";
//}

}

*/


//=====================================================
//Q.12) WAP to separate odd and even integers into separate arrays.

/*


#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[100],evnum,odnum;
	cout<<"Enter a range : ";
	cin>>n;
	cout<<"Enter any number : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	  evnum=0; odnum=0;
	   cout<<"the even number is : "<<" "<<endl;
	for(int i=0;i<n;i++)
	{
		
		if(arr[i]%2==0)
		{
		 cout<<arr[i]<<" ";
		}
	
	}
	cout<<endl;
	cout<<"the odd number is : "<<endl;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<" ";
		}
	}

	
}


*/



//==================================================================================

/*
Q.1) WAP to find how many duplicate elements are present in our array.
(duplicate element has a frequency of more than 1)
*/


/*

#include<iostream>
using namespace std;
int main()
{
    int arr[100]; 
    int n, count = 0;  //   mm (unused)
    int i, j;
    cout<<"input the range of array  :";
    cin>>n;

    cout<<"Input  elements in the array :\n";
    for (i = 0; i < n; i++)
    {
        cout<<"element is  "<< i<<" ";
        cin>>arr[i];  
    }
    // Check for duplicate elements in the array using nested loops
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++; 
                break;  
            }
        }
    }

    cout<<"Total number of duplicate elements found in the array: \n"<< count;

}
*/
//---------------------------
/*

#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int i,j,count,n;
	cout<<"Enter a range of array : ";
	cin>>n;
	cout<<"Enter any element : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"the element index is : "<<i<<" ";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
		}
	}
	cout<<"total dubilicate element is : "<<count;
	
}


*/

//=====================================================================

/*
Q.2) WAP to find the sum of duplicate elements which are present in our array.
(duplicate element has a frequency of more than 1)

*/

/*


#include<iostream>
using namespace std;
int main()
{
     int arr[100];
	 int i,j,n,count=0;
	 int sum=0;
	 cout<<"Enter a range array : ";
	 cin>>n;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<"the element of index : "<<i<<" ";
	 	cin>>arr[i];
	 }
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	{
	 		if(arr[i]==arr[j])
	 		{
	 			count++;
	 			sum=sum+count;
	 			break;
			 }
		 }
	 }
	 cout<<"the sum of dublicate element : "<<sum;
	 
	 
	   
}

*/

//=============================================================================




//  Q.3) WAP to display  only the prime number which are present in our array.


/*

#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;int count=0;
  cout<<"Enter a range : ";
  cin>>n;
//  for(int i=0;i<5;i++)
//  {
//  	cin>>arr[i];
//  }
   for(int i=0;i<=n;i++)
   {
	if(arr[n]%i==0)
	{
		count++;
	}
   }
if(count==2)
{
	cout<<"prime : ";
}	
else
{
	cout<<"not prime : ";
}
}

*/

//=======================================================

/*

Q.4) Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n. 
display the missing element.
Examples:
Input: n = 5, arr[] = {1,2,3,5} Output: 4
Input: n = 2, arr[] = {1} Output: 2
*/

/*

#include<iostream>
using namespace std;
 
int main()
{
    int n, i, c, b;
 
    cout<<"Enter size of array : ";
    cin>>n;
    int array[n-1];     
    cout<<"Enter elements into array : ";
    for (i = 0; i < n - 1; i++)    
        cin>>array[i];  //         1 2 3 4 5 7 8
                       //          0 
  
      for (i = 0; i < n - 1; i++)    {
      	
      	 if(i+1!=array[i]){
      	 	cout<<"Missing element is : "<<i+1<<endl;
      	 	break;
		   }
      	
      	
	  }
        

  
   // cout<<"Missing element is : "<< c;
}


*/



//====================================================================

/*

Q.2 Given an integer array nums, move all 0's to the end of it while maintaining the relative order of
 the non-zero elements.
Note that you must do this in-place without making a copy of the array.
 Example 1:
Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
Example 2:
Input: nums = [0] Output: [0]

*/



#include<iostream>
using namespace std;
int main()
{
	int j=0;
	int arr[5]={0,1,0,3,12};
	for(int i=0;i<5;i++)
	{
	
		if(arr[i]!=0)
		{
			arr[j]=arr[i];
			j++;                                  // not solve question 
		}
	}

	while(j<5)
	{
		arr[j]=0;
		j++;
	  // cout<<arr[j]<<" ";
	}
	
			for(int i=0;i<5;i++)
	{
	     cout<<arr[i]<<" ";
	}

}


//============================================================
/*
Q.3 Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
 Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
*/







