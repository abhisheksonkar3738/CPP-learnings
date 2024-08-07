//7-->WAP to print all armstrong number in given range.
#include<iostream>
using namespace std;
main()
{	
	for(int i=100;i<=1000;i++)
	{	
		int num=i,last,sum=0,temp;
     temp=num;
     
	while(num>0)
	{
		last=num%10;
		sum=sum+last*last*last;
        num=num/10;		
	}
	if(temp==sum)
     {
     	cout<<sum<<ends;
		 }	
}
}
















//===================================================
//#include<iostream>
//using namespace std;
//int main()
//{
//    int i,n,h,arms=0,a,b,c,d,e;
//    cout<<"\nEnter the starting value:";
//    cin>>i;
//    cout<<"\nEnter the Ending value:";
//    cin>>n;
//    cout<<"\nArmstrong numbers:";
//    for(i;i<=n;i++)
//    {
//       a=i/10;//12
//        b=i%10;//8
//        c=a/10;//1
//        d=a%10;//2
//        b=b*b*b;
//        c=c*c*c;
//        d=d*d*d;
//        e=b+c+d;
//    if(i==e)
//    {
//        cout<<"\n"<<i;
//        arms++;
//    }
//    }
//    cout<<"\nTotal number of armstrong values:"<<arms;
//    return 0;
//}

