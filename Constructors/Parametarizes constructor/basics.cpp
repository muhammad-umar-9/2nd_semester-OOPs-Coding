#include<iostream>
using namespace std;

class Test
{
	int a,b;
	public:
		Test()
		{
			a=50;
			b=30;
		}
	void add();	
};
void Test::add()
{
	int c;
	c=a+b;
	cout<<c;
}
int main()
{
	Test t1,t2,t3;
	t1.add();
	t2.add();
	t3.add();
}