#include<iostream>
using namespace std;
class Friend
{
	private:
		int x,y;
		friend void show();
	public:
		void display();
//	   friend void show();	
};
void Friend::display()
{
	cout<<"I am not in friend function "<<endl;
	
}
void show(Friend F1)
{
	cout<<"I am in friend function "<<endl;
	F1.x=12;
	cout<<F1.x;
}
int main()
{
	Friend F1;
	F1.display();
	show();
	return 0;
}









