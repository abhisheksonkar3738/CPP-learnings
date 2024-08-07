/*19. Write a program to enter the numbers till the user wants and at the end the program
 should display the largest and smallest numbers entered*/
 #include<iostream>
 using namespace std;
 main()
 {
// 	cout<<INT_MIN;
 	int num ,large=INT_MIN,small=INT_MAX;
 	int n;
 	cout<<"Enter range : ";
 	cin>>n;
 	for(int i=1;i<=n;i++)
 	{
 		cout<<"Enter a number : ";
 		cin>>num;
 		if(num>=large)
 		{
 			large=num;
		 }
		 if(num<=small)
		 {
		 	small=num;
		 }
	 }
	 cout<<"large number : "<<large<<endl;
	  cout<<"small number : "<<small;
 }
