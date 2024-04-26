#include<iostream>
using namespace std;

class Num
{
	private:
		int n;
	public:
	 	Num()
	 	{
	 		n=100;
		 }
	void increment();
	void display();	 
};
void Num::increment()
{
	++n;
}
void Num::display()
{
	cout<<"Number in display is: "<<n<<endl;
}
int main()
{
	Num m1,m2;
	m1.increment();
	m1.increment();
	m1.increment();
    cout<<"The value incrmenting after three times "<<"\n"<<endl;
    m1.display();
    cout<<"FOR every object constructor call itself again "<<"\n"<<endl;
    
	cout<<"For 2nd object we see the same value as we initialize in constructor , not the increment value"<<"\n"<<endl;
	m2.display();
}