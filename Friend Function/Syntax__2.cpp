#include<iostream>
using namespace std;
class Friend
{
	private:
		int id , roll_no;
		friend void show(Friend F1);
	public:
//		void display();
//	friend void show(Friend F1);	
};
void Friend::display()
{
	cout<<"I am not in friend function "<<endl;

}
void show(Friend f1)
{
	f1.id=23;
	f1.roll_no=12;
	cout<<"I am in friend function "<<endl;
	cout<<"Your ID is "<< f1.id <<endl;
	cout<<"Your Roll number is "<< f1.roll_no <<endl;
}
int main()
{
	Friend F1;
	F1.display();
	show(F1);
	return 0;
}

