#include<iostream>
using namespace std;

class Add
{
	private:
		int x , y;
	public:
		Add()
		{
		x = y = 0;	
		}		
	void input()
	{
	cout<<"Enter x and y ";
	cin>> x >> y ;
		
	}
	void show()
	{
	cout<<" A and Y is : " << x << " "<< y ;	
	}	
//	Add operator + (Add p) // here we pass parameter as second object
//	{
//		Add temp;
//		temp.x = p.x + x;
//		temp.y = p.y + y;
//		return temp;
//	}

	Add operator + (Add p);   // Declaration of operator overloading function

};
Add Add::operator + (Add p)   
	{
		Add temp;
		temp.x = p.x + x;
		temp.y = p.y + y;
		return temp;
	}
int main()
{
	Add a1 , a2 , a3;
	a1.input();
	a2.input();
	a3 = a1 + a2;  //a1 is calling object and a2 is passing as parameter
	
	a3.show();
	
	return 0;
}