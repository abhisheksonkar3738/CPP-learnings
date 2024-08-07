//  wap find the row and coloum sum element
#include<iostream>
using namespace std;
int main()
{
	int A[3][3]={2,9,7,11,5,1,5,6,2};
    int sum;
    cout<<"row wise sum : "<<endl;
    for(int i=0;i<3;i++)
    {
    	sum=0;
    	for(int j=0;j<3;j++)
    	{
//    		cout<<A[i][j]<<" + ";
    		if(j<2)
    		{
    			cout<<A[i][j]<<" + ";
			}
			else
			{
				cout<<A[i][j]<<" = ";
			}
    		sum=sum+A[i][j];
		}
		cout<<" "<<sum;
		cout<<endl;	
	}
	cout<<"the coloum sammmetion : "<<endl;
	  for(int i=0;i<3;i++)
    {
    	sum=0;
    	for(int j=0;j<3;j++)
    	{
    		cout<<A[j][i]<<" + ";
    		sum=sum+A[j][i];
		}
		cout<<"---->"<<sum;
		cout<<endl;	
	}
    
}
