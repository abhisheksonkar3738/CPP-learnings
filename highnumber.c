#include<stdio.h>
#include<conio.h>


int main()
{
	int a=10,b=20,c=30;
   
//   scanf("%d",&a);
//    scanf("%d",&b);
//     scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d",a);
	}
	else if(b>c && b>a)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	getch();
}
