#include<stdio.h>
#include<conio.h>

using namespace std;
int main()
{
	int a,b,c;
   printf("Enter any three number : ");
   scanf("%d",&a,b,c);
	if(a>b && a>c)
	{
		printf(a);
	}
	else if(b>c && b>a)
	{
		printf(b);
	}
	else
	{
		printf(c);
	}
}
