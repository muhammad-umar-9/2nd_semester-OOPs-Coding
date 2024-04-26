#include<iostream>
using namespace std;

class User
{
	private:
	int x;
	public:
	User()
	{
		x = 0;
	}	
	User operator ++()
	{
		
		x++;
		return *this;
	} 
	void display()
	{
		cout<<"Your value is "<< x <<endl;
	}
};
int main()
{
	User u1;

	u1.display();
	
	User u2 = ++u1;
	
	User u3 = ++u1;
	
	
	u2.display();
	
	u3.display();
	
	return 0;
}