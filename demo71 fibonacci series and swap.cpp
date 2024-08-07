//WAP to print fibonicci series upto n terms;

// 0 1 =>starting 
 // 0 1 1 2 3 5 8 13 21 .............
 
 // 8 terms
 // 0 1 1 2 3 5 8 13.........
 
 //term 10
 // 0 1 1 2 3 5 8 13 21 34 .............................
 
 //=======================================================================================
 // 2. wap to swap to number with each other ;
 #include<iostream>
 using namespace std;
 main()
 {
 	int a,b,temp;
 	cout<<"Enter the value a and b : ";
 	cin>>a>>b;
 	cout<<"before swapping a : "<<a<<" b : "<<b<<endl;
 	
 	a=a+b;
 	b=a-b;          //without using 3rd variable;
 	a=a-b;
 	
 	/*	temp=a;
 		a=b;
 		b=temp; */          //using 3rd variable 
 			cout<<"after  swapping a : "<<a<<" b : "<<b<<endl;
 		
 }
 
 

