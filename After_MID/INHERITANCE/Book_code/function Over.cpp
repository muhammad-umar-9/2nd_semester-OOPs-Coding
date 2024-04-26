#include<iostream>
using namespace std;

class Simple
{
	public:
		int a , b;
	public:
	Simple()
	{
		a=0;
		b=0;
	}	
	void input()
	{
		cout<<"Enter a and b "<<endl;
		cin>> a >> b;	
	}	
	void add()
	{
	
	 	cout<<a+b<<endl;
	}	
	void subtract()
	{
	
 	cout<<a-b<<endl;
	}
	void multiply()
	{
		cout<<a*b<<endl;
	 	
	}
	void division()
	{
	
	 	cout<<a/b<<endl;;
	}
};
class Complex : public Simple
{
	
	public:
	void add()
	{
	 	if(a <= 0 || b <= 0)
	 	cout<<"invalid "<<endl;
	 	else
	 	Simple::add();
	}	
	
	void subtract()
	{
		if(a <= 0 || b <= 0)
	 	cout<<"invalid "<<endl;
	 	else
	 	Simple::subtract();
	 	
	}
	
	void multiply()
	{
	
	 	if(a <= 0 || b <= 0)
	 	cout<<"invalid "<<endl;
	 	else
	 	Simple::multiply();
	}
	
	void division()
	{
		if(a <= 0 || b <= 0)
	 	cout<<"invalid "<<endl;
	 	else
	 	Simple::division();
	}
};
int main()
{
	Complex c1;
	c1.add();
	c1.input();
	c1.add();
	c1.subtract();
	c1.multiply();
	c1.division();
	
	return 0;
}


