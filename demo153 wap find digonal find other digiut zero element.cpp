//  wap find digonal find other digiut zero element
#include<iostream>
using namespace std;
int main()
{
     int A[3][3]={2,9,7,11,5,1,5,6,2};
    int sum;
   
    for(int i=0;i<3;i++)
    {
    	sum=0;
    	for(int j=0;j<3;j++)
    	{
    		if(i!=j)
    		{
    			A[i][j]=0;
//    			
			}

		}
		
	}
	  for(int i=0;i<3;i++)
    {
    	sum=0;
    	for(int j=0;j<3;j++)
    	{
    	
    		cout<<	A[i][j]<<" ";

		}
		cout<<endl;	
	}


    
}
