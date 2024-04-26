#include<iostream>
using namespace std;
class Base
{
	protected:
		int x=0;
};
class derived:public Base
{
	public:
	void print()
	{
		cout<< x <<endl;
	}
	
};
int main()
{
	derived d1;
	//cout<< d1.x <<endl;  //if in Base class x is protected or Private then we can't access in main 
	
	d1.print();
	return 0;
}