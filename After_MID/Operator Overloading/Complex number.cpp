#include<iostream>
using namespace std;

class Point
{
	int x1 , y1;
	public:
	Point(int x=0 , int y=0)
	{
		x1 = x;
		y1 = y;
	}
	Point operator + (const Point &rhs)
	{
		Point P;
		
		P.x1 = x1 + rhs.x1; //here x1 is P_1(1 , 3) x1 is 1 and Rhs.x1 is P_2(4 , 5) x1 is 4
		P.y1 = y1 + rhs.y1; //here y1 is P_1(1 , 3) y1 is 3 and Rhs.y1 is P_2(4 , 5) y1 is 5
	
		return P;
	}
	Point operator - (const Point &rhs)
	{
		Point P;
		
		P.x1 = x1 - rhs.x1; //here x1 is P_1(1 , 3) x1 is 1 and Rhs.x1 is P_2(4 , 5) x1 is 4
		P.y1 = y1 - rhs.y1; //here y1 is P_1(1 , 3) y1 is 3 and Rhs.y1 is P_2(4 , 5) y1 is 5
	
		return P;
	}
	Point operator * (const Point &rhs)
	{
		Point P;
		
		P.x1 = x1 * rhs.x1; //here x1 is P_1(1 , 3) x1 is 1 and Rhs.x1 is P_2(4 , 5) x1 is 4
		P.y1 = y1 * rhs.y1; //here y1 is P_1(1 , 3) y1 is 3 and Rhs.y1 is P_2(4 , 5) y1 is 5
	
		return P;
	}
		Point operator / (const Point &rhs)
	{
		Point P;
		
		P.x1 = x1 / rhs.x1; //here x1 is P_1(1 , 3) x1 is 1 and Rhs.x1 is P_2(4 , 5) x1 is 4
		P.y1 = y1 / rhs.y1; //here y1 is P_1(1 , 3) y1 is 3 and Rhs.y1 is P_2(4 , 5) y1 is 5
	
		return P;
	}
	void display()
	{
		cout<<"Real and imaginary part is  : "<< x1 << "+" << y1 <<"i "<<endl;
		
		
	}
		
};
int main()
{
	Point P_1(1 , 3) , P_2(4 , 5);
	
	Point P_3 = P_1 + P_2;
	
	Point P_4 = P_3 - P_2;
	
	Point P_5 = P_4 * P_2;
	
	Point P_6 = P_5 / P_2;
	
	P_4.display();
	
	P_3.display();
	
	P_5.display();		
	
	P_6.display();
	
	return 0;					
}