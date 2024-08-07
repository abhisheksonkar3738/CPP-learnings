/* WAP to add only digits comes at a even place of number n;
    n=2345891 = 3+5+9;
    */

#include <iostream>
using namespace std;

int main(){
int num,sum=0,last;
cout<<"enter test number:";
cin>>num;   //2345891
int c=1;
while(num>0){
	last=num%10;
	sum=sum*10+last;   //number reverse
	num=num/10;
}
num=sum;  //1985432
sum=0;

cout<<num;


//	while(num>0){
//	last=num%10;
//	if(c%2==0){
//	
//	sum=sum+last;   //number add
//	cout<<last<<"+";
//}
//num=num/10;
//c++;
//}
//cout<<"="<<sum;
}
