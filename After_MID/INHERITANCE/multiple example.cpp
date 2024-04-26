#include<iostream>
using namespace std;

class Animal
{
	public:
	void walk()
	{
		cout<<"Ability to walk "<<endl;
	}
		void eat()
	{
		cout<<"Ability to eat "<<endl;
	}
	
};
class dog : public Animal
{
	public:
	void quality()
	{
		cout<<"bhaooo"<<endl;
	}			
		
};
class cat:public Animal
{
	public:
	void quality_1()
	{
		cout<<"Meawoo"<<endl;
	}
	
};
class Horse:public Animal
{
	public:
	void quality_2()
	{
		cout<<"BRAVERY "<<endl;
	}
};
int main()
{
	Horse h1;
	h1.eat();
	h1.walk();
	h1.quality_2();
}