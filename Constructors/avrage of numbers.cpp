#include<iostream>

using namespace std;

class Number
{
	private:
		int x,y,z;
	public:
	
	Number()
	{
		x=100;
		y=100;
	}
void average()
    {
	z = (x+y)/2;
	cout<<"Average is:"<<z;
		}		
};
int main()
{
	
	Number n;
	n.average();
	
}