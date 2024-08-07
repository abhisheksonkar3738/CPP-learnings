//=========================================================================================
/*
Q.1 Problem :Two Pair Sum
Statement:Given an array of integers nums and an integer target,return indices of the two numbers 
such that they add up to target.

Input:v[]={2,4,6,11,8,12}, target=14
Output:[2,4]
*/

















//==========================================================
/*
Q.2  Write a program to sum of two array. 
Input: A1 = [2, 3, 1, 4]   &  A2= [6] 
Output: 2320
Input: A1 = [2, 3, 1, 4]   & A2=[2,3] 
Output: 2337
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to convert vector to integer
int vectorToInt(vector<int>& A) {
    string str;
    for (int num : A) {
        str += to_string(num);
    }
    return stoi(str);
}

// Function to sum two arrays represented as numbers
int sumOfArrays(vector<int>& A1, vector<int>& A2) {
    int num1 = vectorToInt(A1);
    int num2 = vectorToInt(A2);
    return num1 + num2;
}

int main() {
    // Test case 1
    vector<int> A1_1 = {2, 3, 1, 4};
    vector<int> A2_1 = {6};
    cout << "Output for Test Case 1: " << sumOfArrays(A1_1, A2_1) << endl;  // Output: 2320
    
    // Test case 2
    vector<int> A1_2 = {2, 3, 1, 4};
    vector<int> A2_2 = {2, 3};
    cout << "Output for Test Case 2: " << sumOfArrays(A1_2, A2_2) << endl;  // Output: 2337
    
    return 0;
}


















//======================================================================================

/*
Q.7 Delete the specific position from an array.
Input: arr = [9,3,2,1,5,23,10,4],position=3
Output: [9,3,2,5,23,10,4]
*/
/*

#include<iostream>
using namespace std;
int main()
{
	int n=8;
	int arr[n]={1,2,3,4,5,6,7,8};
	int position=3;
	for(int i=position;i<8;i++)
	{
		if(i<n-1)
		{
			arr[i]=arr[i+1];	
		}
		else
		{
			arr[i]=0;
		}
	
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
//	for(int i=0;i<7;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
}

*/
