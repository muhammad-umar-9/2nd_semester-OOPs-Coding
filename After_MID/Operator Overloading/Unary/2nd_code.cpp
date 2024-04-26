#include<iostream>
using namespace std;

class Unary
{
	private:
		int a ,  b;
	public:
	Unary(int x=0 ,  int y=0)
	{
		a = x;
		b = y;	
	}	
	Unary operator --()
	{
		return Unary(--a , --b);
	}
		Unary operator ++()
	{
		return Unary(++a , ++b);
	}
		Unary operator ++(int) 
	{
		return Unary(a++ , b++);
	}
	void display()
	{
		cout<<"X is: "<< a << endl;
		cout<<"Y is: "<< b << endl;
	}
	
	
};


int main()
{
	Unary U_1(2 , 3) , U_2;
	
	Unary U_3 = --U_1;
	
	Unary U_4 = ++U_1;
	
	Unary U_5 = U_1++;
	
	U_1.display();	
	U_3.display();
	U_4.display();
	U_5.display();
	
	return 0;
}