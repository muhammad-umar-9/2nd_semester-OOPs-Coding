#include<iostream>
using namespace std;

class call
{
	private:
		int x,y,z,w;
	public:	
	call(int a, int b , int c ,int d=89)
	{
		x=a;
		y=b;
		z=c;
		w=d;
	}	
	call(int a, int b)
	{
		x=a;
		y=b;
		
	}
	void display()
	{
		cout<<"Your age is: "<<x<<endl;
		cout<<"Your id is: "<<y<<endl;
		cout<<"Your salary is: "<<z<<endl;
		cout<<"Your bonus is: "<<w<<endl;
		
	}
};
int main()
{
	call c1(2,3,4)
	c2(3,4,5);
	
	c1.display();
	c2.display();
	return 0;
}