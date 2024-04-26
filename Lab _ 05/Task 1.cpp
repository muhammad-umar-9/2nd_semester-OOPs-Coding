#include<iostream>
using namespace std;

class Area
{
	private:
	double length,width;
	double area;
	public:
		
	Area()
	{
	cout<<"Welcome To Area Class"<<endl;	
	length = 20;
	width = 15;	
	}	
	
	Area(const Area& a2)
  {
 	length = ( a2.length+5);
	width = ( a2.width+5); 
  } 
  
  Area(int x, int y)
  {
  	length = x;   
  	width = y;
  }
  
  Area(double a, double b)
  {
  	length = a;
  	width = b;
  }
  void calculate()
  {
  	area = length * width; 
  	cout<<"Area of rectangle "<<area<<endl; 
  }
};
int main()
{
	Area A1;
	A1.calculate();
	//copy constructor here we call
	Area A2=A1;
	A2.calculate();
	//here we pass 10 and 5 to the constructor of integer type
	Area A3(10,5);
	A3.calculate();
	//here we pass 10 and 5 to the constructor of double type
	Area A4(20.8 , 10.5);
	A4.calculate();
	
}