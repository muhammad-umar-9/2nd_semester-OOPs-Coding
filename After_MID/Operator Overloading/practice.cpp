#include<iostream>
using namespace std;

class Minus
{
	private:
	int x , y;
	public:
	Minus(int a=0 , int b=0)
	{
		x = a;
		y = b;
	}	
	Minus operator * (const Minus &m)
	{
		Minus M;
		M.x = x + m.x;
		M.y = y + m.y;
		return M;
	}
	Minus operator + (const Minus &m)
	{
		Minus M;
		M.x = x + m.x;
		M.y = y + m.y;
		return M;
	}
	void display()
	{
		cout<<"X : "<<x <<endl<< "Y : "<<y<<endl;
	}
	
};
int main()
{
	Minus m1(8 , 4) , m2(5 , 6);
	// Minus m3 = m1 - m2;
	Minus m4 = m1 + m2;
	// Minus m5 = m4 - m3;
	
	// m3.display();
	m4.display();
	// m5.display();
	return 0;
}