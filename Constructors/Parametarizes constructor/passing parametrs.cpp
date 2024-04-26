#include<iostream>
using namespace std;

class Test
{
	int a,b,c;
	public:
		Test(int x, int y)
		{
			a=x;
			b=y;
		}
	void add();	
};
void Test::add()
{
	c=a+b;
	cout<<c;
}
int main()
{
	Test t1(50,60);
	t1.add();
	Test t2(40,65);
	t2.add();

}