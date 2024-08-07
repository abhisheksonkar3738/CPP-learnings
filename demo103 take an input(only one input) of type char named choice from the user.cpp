/*WAP to display result according to following condition:
1)take an input(only one input) of type char named choice from the user.

2)if user enter 'U' display all upper letters
i,e
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 

3)else if, user enter 'L' display all lower letters
a b c d e f g h i j k l m n o p q r s t u v w x y z

4)other then this
display message "no match"*/
#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"Enter your character : ";
	cin>>ch;
	if(ch=='U')
	{
		for(ch='A';ch<='Z';ch++)
		{
			cout<<ch<<ends;
		}
	}
	else if(ch=='L')
	{
		for(ch='a';ch<='z';ch++)
		{
			cout<<ch<<ends;
		}
	}
	else
	{
		cout<<"no match character : ";
	}
}

