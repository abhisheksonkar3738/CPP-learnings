// Function main array kaise use karte hai kaise usko update karte hai ye padhaya hai
 //passing array in a function 
//access element of array with the help of pointer
// when we find array size in function size will loss this is called decay of size

#include<iostream>
using namespace std ;

void increment_10(int arr[], int size){
        for(int i = 0 ; i < size ; i++){
                arr[i] = arr[i] + 10 ;
        }
}
int main(){
        int arr[] = {34,52,45,6,5,4,6} ;
        int size = sizeof(arr) / sizeof(int) ;
                for (int i=0 ; i < size ; i++)
				{
                cout<<arr[i]<<" " ;
                }
        cout << endl ;
        increment_10(arr , size) ; //actual parameter
                for (int i=0 ; i < size ; i++) { //size passing behave as call by value
                arr[i] = arr[i] + 10 ;
                  arr[i] = arr[i] + 10 ;
                    arr[i] = arr[i] + 10 ;
                cout << arr[i] << " " ;
        }
}
