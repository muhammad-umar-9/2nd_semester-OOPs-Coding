#include <iostream>
using namespace std;
class Rectangle {
	int a, b ,c;
	
		public:
			
      Rectangle(int x,int y)  //parameterized constructor
	{
		a=x;
		b=y;
	 } 
	 void area();
  };
  
 void Rectangle::area () 
 {
     c=a*b;
     cout<<c;
}
int main () 
{
		int l1,w1,l2,w2;

	cout<<"Enter length and width "<<endl<<"\n";
	cin>>l1>>w1;
	
	cout<<"Area 1: "<<endl;
	
	Rectangle u(l1,w1);
	u.area();
	
	cout<<endl<<"For 2nd rectangle enter length and width"<<endl<<"\n";
	cin>>l2>>w2;
	
	cout<<"Area 2: "<<endl;
	
    Rectangle v(l2,w2);
	v.area();
	
	return 0;
}