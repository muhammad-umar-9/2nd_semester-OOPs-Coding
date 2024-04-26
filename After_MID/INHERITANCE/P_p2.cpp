#include<iostream>
using namespace std;
class Base
{
	protected:
		int x=0;
};
class derived:private Base
{
	public:
	void print()
	{
		cout<< x <<endl;
	}
	
};
class derived_1 : public derived
{
	void print_1()
	{
	//	cout<< x <<endl;  //if in base class x is protected and our mode is private then it will become private in derived class and 
	                      //we can not use it in derived 1 
	} 
	
		
};

int main()
{
	derived d1;
	//cout<< d1.x <<endl;  //if in Base class x is protected or Private then we can't access in main 
	
	d1.print();
	return 0;
}