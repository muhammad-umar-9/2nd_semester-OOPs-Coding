#include<iostream>
using namespace std;

class Box
{
	public:
		Box() //as we make constructor so, there is no return type. Constructor name same as class name
		{
			cout<<"I am in a constructor "<<endl;
		}
	void display();  //if here return type is not mention then we not call it
		
};

void Box::display()
{
	cout<<"I am in display function"<<endl;
}
int main()
{
	Box b;  //by making object of class , constructor automatically call itself
	Box b1; //for every object , first constructor call then remaining
	Box b2;
	
	b.display(); //but functions call explicitly
}