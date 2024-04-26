#include<iostream>
using namespace std;

class Car
{
	private:
		int len , wid , hei;
	public:
	Car(int x , int y , int z)
	{
	len = x;
	wid = y;
	hei = z;	
	}	
	friend class Truck;
};
class Truck
{
	private:
	int length , width , height;
	
	
	public:
	
	void twice(Car a)
	{
		length = a.len*2;
		width = a.wid*2;
		height = a.hei*2;
		cout<<"Thw twice length"<<length <<" "<<width << " "<<height<<endl;
	}	
};
int main()
{
	Car car(3,2,2);
	Truck truck;
	truck.twice(car);
	return 0;
}