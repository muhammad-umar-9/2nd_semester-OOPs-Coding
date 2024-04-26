#include<iostream>
using namespace std;

class Base
{
	int y;
	public:
	Base(int x1)
	{
		y = x1;	
	}	
	friend class AO;
};

class AO
{
	private:
		int *x;
	public:
	 
	 	AO(int val = 0)
	 	{
	 		x = new int (val);
		}
		void Set_X(int val)
		{
			*x = val;
		}
	void display()
	{
		cout<<"Value is: "<< *x <<endl;	
	}	
	~AO()
	{
		delete x;
	}
	AO& operator = (const AO &rhs)
	{
	if(this != &rhs)
	*x = *rhs.x;
	return *this;
	}
	AO& operator = (const Base &rhs)
	{
		*x = rhs.y;
		return *this;
	}
	AO(const AO & rhs)
	{
		x = new int (*rhs.x);
	}
};
int main()
{
	AO A1(10);
	AO A2 , A3;
	(A2 = A3) = A1;
	A1.display();
	A2.display();
	A3.display();
	
//	Base b1(15);
//	A1 = b1;
//	A1.display();
	
//	AO A2;
//	A2 = A1;
//	A1.Set_X(20);
//	A1.display();
//	A2.display();
	return 0;
	
}

