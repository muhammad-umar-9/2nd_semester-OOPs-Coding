#include<iostream>
using namespace std;

class OP
{
	private:
	int a , b;
	public:
	OP(int x=0 , int y=0)	
	{
		a = x;
		b = y;
	}
	OP operator - (OP &num)
	{
		OP P;
		P.a = a - num.a;
		P.b = b - num.b;
		return P;
	}
	OP add(const OP &num)
	{
		OP P;
		P.a = a - num.a;
		P.b = b - num.b;
		return P;
		
	}
	void display()
	{
		cout<<"Subtraction of X _ ordinates "<< a <<endl;
		cout<<"Subtraction of y _ ordinates "<< b <<endl;
	}
	
	
};
int main()
{
	OP O1(8 , 5) , O2(4 , 2);
	
	OP O3 = O1 - O2;
	
	OP O4 = O3.add(O2);
	
	O4.display();
	
	O3.display();
	
	return 0;
}