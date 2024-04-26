#include<iostream>
using namespace std;

class Engine 
{
	private:
	int cylinders , horse_power;
		Engine()
	{
		cylinders = 20;
		horse_power = 12;
	}
	friend int main();	
	public:
//	Engine()
//	{
//		cylinders = 20;
//		horse_power = 12;
//	}	
	
	void set_engine(int cyn, int hp)
	{
		cylinders = cyn;
		horse_power = hp;
	}
	friend void show_engine(Engine);
};

void show_engine(Engine engine)
{
	cout<<"Values of constructor"<<endl;
	cout<<"cyn "<<engine.cylinders<<endl;
	cout<<"hp "<<engine.horse_power<<endl;
}

class Car
{
	private:
		string name;
		string model;
		Engine engine;
			Car()
		{
			name = "Toyota";
			model = "Camry";	
		}
	friend int main();	
	public:
//		Car()
//		{
//			name = "Toyota";
//			model = "Camry";	
//		}
	friend void display(Car);
};

void display(Car car)
{
	cout<<"Your Car name is "<<car.name<<endl;
	cout<<"Your Car model is "<<car.model<<endl;
	car.engine.set_engine(20, 56);
	show_engine(car.engine);
}

int main()
{
	Car c1;
	display(c1);
	return 0;
}
