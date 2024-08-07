#include<iostream>
using namespace std;
class Fruit{
    public:
	   string name;
	   string color;
	   string taste;
	   string shape;
	   double price;
	void insert_data(){
	   	cout<<"Enter the name of fruit : "<<endl;
	   	cin>>name;
	   	cout<<"Enter the color of fruit : "<<endl;
	   	cin>>color;
	   	cout<<"Enter the taste of fruit : "<<endl;
	   	cin>>taste;
	   	cout<<"Enter the fruit is shap : "<<endl;
	   	cin>>shape;
	   	cout<<"Enter the price of fruit : "<<endl;
	   	cin>>price;
	   }	
	   
	   void display()
	   {
	   	cout<<"the fruit is name is : "<<name<<endl;
	   	cout<<"the fruit color is : "<<color<<endl;
	   	cout<<"the fruit taste is : "<<taste<<endl;
	   	cout<<"the fruit is shape is : "<<shape<<endl;
	   	cout<<"the fruit price is : "<<price<<endl<<endl<<endl<<endl;
	   }
	   
	      void display_taste()
	   {
	   	cout<<name<<" is "<<taste<<"in taste\n";
//	   	cout<<"the fruit is name is : "<<name<<endl;
//	   	cout<<"the fruit color is : "<<color<<endl;
	  // 	cout<<"the fruit taste is : "<<taste<<endl<<endl<<endl<<endl;
//	   	cout<<"the fruit is shape is : "<<shap<<endl;
//	   	cout<<"the fruit price is : "<<price<<endl;
	   }
	      void modifi_price()
	   {
//	   	cout<<"the fruit is name is : "<<name<<endl;
//	   	cout<<"the fruit color is : "<<color<<endl;
//	   	cout<<"the fruit taste is : "<<taste<<endl;
//	   	cout<<"the fruit is shape is : "<<shap<<endl;
	   	cout<<"modified fruit the fruit price is : "<<endl;
	   	cin>>price;
	   	cout<<"the update fruit price is : "<<price<<endl;
	   }
};
int main()
{
   Fruit obj1;
   obj1.insert_data();
   obj1.display();
   obj1.display_taste();
   obj1.modifi_price();
//    obj1.display();
	
}
