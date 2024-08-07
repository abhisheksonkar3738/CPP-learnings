/* wap a program to perform some calculation accordingly;
    R->area of rect;
    s->area of square;
    c->area of circle;
    e->Exit;
    
    */
    
#include<iostream>
using namespace std;
main()
{
	char choice;
	int len,bre,side,rad;
	double pi=3.14;
	do{
		cout<<"\n---------menu driven program-------area---------\n :";
		cout<<"R---------------------->Rectangle\n";
		cout<<"S-------------------->Square\n";
		cout<<"C--------------------->Circle\n";
		cout<<"E---------------------->Exit\n";
		cout<<"Enter ur choice : ";
		cin>>choice;
		switch(choice){
			case 'R':
			{
		     cout<<"Enter l and b : "<<endl;
			cin>>len>>bre;
			cout<<"the area of rectangle : "<<len*bre<<endl;
			break;
	      	}
	      	case 'S':
	      		{
	      			cout<<"Enter side : ";
	      			cin>>side;
	      			cout<<"the area of square : "<<side*side<<endl;
	      			break;
				  }
		   case 'C':
		   	{
		   		cout<<"Enter a radius : ";
		   		cin>>rad;
		   		cout<<"the area of circle : "<<pi*rad*rad;
		   		break;
			   }
			   case'E':
			   	{
			   		 	cout<<"good bye : "<<endl;
			   		 	break;
				   }
				   default:cout<<"invalid choice : ";
				   
			  
		}
	}
	while(choice!='E');
	
}
