// Write a C++ program to find minimum and second minimum between three numbers

#include<iostream>
using namespace std;
main()
{
int a,b,c;
cout<<"enter any three number : "<<endl;
cin>>a>>b>>c;
if(a<b&&a<c){
	cout<<a<<"is smallest\n"<<endl; // b,c
	if(b<c)
	 cout<<b<<"is second smallest";
	else
	  cout<<c<<"is second smallest";
	
}
else if(b<a&&b<c){
	cout<<b<<"is smallest\n"<<endl;// a,c
		if(a<c)
	 cout<<a<<"is second smallest";
	else
	  cout<<c<<"is second smallest";
}
else{
	cout<<c<<"is smallest\n"<<endl;// a,b
		if(b<a)
	 cout<<b<<"is second smallest";
	else
	  cout<<a<<"is second smallest";
}


}
