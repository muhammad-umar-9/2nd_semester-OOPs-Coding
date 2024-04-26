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
	User operator + (const User &rhs)
	{
		User u;
		u.x = x + rhs.x;
		u.y = y + rhs.y;
		return u;
		
	} 
	void display()
	{
		cout<<"Your value is "<< x <<endl;
		cout<<"Your value of y "<< y <<endl;
	}
};
int main()
{
	User u1(0 , 0) , u2(1 , 1);
	u1.display();
	User u3 = u1 + u2;
	u3.display(); 
	
	return 0;
}