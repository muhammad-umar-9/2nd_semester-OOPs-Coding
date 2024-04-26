#include<iostream>
using namespace std;

class User
{
	private:
	int x , y;
	public:
	User(int a=0 , int b=0)
	{
		x = a;
		y = b;
	}	
	User operator ++()
	{
		x++;
		y++;
	} 
	void display()
	{
		cout<<"Your value is "<< x <<endl;
		cout<<"Your value of y "<< y <<endl;
	}
};
int main()
{
	User u1;
	u1.display();
	++u1;
	u1.display();
	
	
	return 0;
}