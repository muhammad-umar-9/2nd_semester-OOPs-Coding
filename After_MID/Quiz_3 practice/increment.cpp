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
	User operator ++ (int)
	{
            User temp = *this;
		++x;
		++y;
            return temp;
	} 
	
	void display()
	{
		cout<<"Your value is "<< x <<endl;
		cout<<"Your value of y "<< y <<endl;
	}
};
int main()
{
      system("cls");
	User u1(0 , 0);
	u1.display();
	u1++;
	u1.display();
	return 0;
}