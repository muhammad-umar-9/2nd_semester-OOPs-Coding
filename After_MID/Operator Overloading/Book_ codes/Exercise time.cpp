#include<iostream>
using namespace std;

class Time
{
	private:
		int hour , minute , seconds;
	public:
	Time(int a , int b , int c)
	{
		hour   = a;
		minute = b;
		seconds = c;
			
	}
	Time operator ++()
	{
		++minute;
	}
	Time operator --()
	{
		--minute;
	}
	void display()
	{
		cout<<"Hour "<< hour <<" "<<"Minute "<< minute <<" "<<"Seconds "<< seconds <<endl;
	}
		
};
int main()
{
	Time t1(2 , 4 , 20);
	t1.display();
	++t1;
	t1.display();
	--t1;
	t1.display();
}