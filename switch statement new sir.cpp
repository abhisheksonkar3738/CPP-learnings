#include<iostream>
using namespace std;
int main()
{
	cout<<"press 1 for January : "<<"\n";
	cout<<"press 2 for Febuary : "<<"\n";
	cout<<"press 3 for March : "<<"\n";
	cout<<"press 4 for April : "<<"\n";
	cout<<"press 5 for May : "<<"\n";
	cout<<"press 6 for June : "<<"\n";
	cout<<"press 7 for July : "<<"\n";
	cout<<"press 8 for August : "<<"\n";
	cout<<"press 9 for Setember : "<<"\n";
	cout<<"press 10 for October : "<<"\n";
	cout<<"press 11 for November : "<<"\n";
	cout<<"press 12 for December : "<<"\n";
	
	int month=0;
	cin>>month;
	
	switch(month)
	{
		case 1:
			cout<<"31 days "<<"\n";
			break;
			case 2:
			cout<<"28 days "<<"\n";
			break;
			case 3:
			cout<<"31 days "<<"\n";
			break;
			case 4:
			cout<<"30 days "<<"\n";
			break;
			case 5:
			cout<<"31 days "<<"\n";
			break;
			case 6:
			cout<<"30 days "<<"\n";
			break;
	    	case 7:
			cout<<"31 days "<<"\n";
			break;
			case 8:
			cout<<"30 days "<<"\n";
			break;
			case 9:
			cout<<"31 days "<<"\n";
			break;
			case 10:
			cout<<"30 days "<<"\n";
			break;
			case 11:
			cout<<"31 days "<<"\n";
			break;
			case 12:
			cout<<"31 days "<<"\n";
			break;
			
			default:
				cout<<"invailed input "<<"\n";
	}
							  
										
							
}
