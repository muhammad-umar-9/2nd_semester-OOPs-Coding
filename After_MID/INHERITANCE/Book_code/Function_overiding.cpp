#include<iostream>
using namespace std;

class Parent
{
	protected:
		int n;
	public:
	Parent(int x)
	{
		n = x;	
	}	
	void show()
	{
		cout<<"Parent Class "<<endl;
		cout<<"Num is: "<< n ;
	}
};
class Child : public Parent
{
	protected:
		char ch;
	public:
	Child(char c , int m) : Parent(m)
	{ 
		
		ch = c;	
	}	
	void show()
	{
		cout<<"Character is: "<< ch ;
		Parent::show();
	}
};
int main()
{
	Child c('u' , 100);
	
	c.show();

	return 0;
}