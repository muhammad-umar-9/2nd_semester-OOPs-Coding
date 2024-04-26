#include<iostream>
using namespace std;

class Test
{
	int a,b,c,d;
	public:
		Test(int x, int y, int z)
		{
			cout<<"Constructor with 3 Arguments"<<endl;
			a=x;
			b=y;
			c=z;
		}
		Test()
		{
			cout<<"Constructor with  zero arguements"<<endl;
			a=b=c=0;
		}
		Test(int x, int y)
		{
			cout<<"Constructor with 2 Arguments"<<endl;
			a=x;
			b=y;
			c=10;
		}
	void add();	
};
void Test::add()
{
	d=a+b+c;
	
	cout<<"Addition is "<<d;
	
}
int main()
{
	Test t1(50,60,45);  //we must pass the 3 values otherwise it will show error e.r [ Test t1;] it will show error
	t1.add();
	cout<<endl;
	
	Test t2;   //as this constructor has no parameters so , it will not show the error
	t2.add();
	cout<<endl;
	Test t3(50,30);
	t3.add();
	
	

}