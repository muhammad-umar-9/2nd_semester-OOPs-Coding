#include<iostream>
using namespace std;
class Box
{
    public:
    double m_width{1};
    double m_length{1};
    double m_height{1};
    public:
    double base_area()
    {
        return m_width*m_length;
    }
    double volume()
    {
        return base_area()*m_height;
    }
}b1;
int main()
{
	cout<<"Your area is "<<b1.base_area();
	cout<<"Your volume is "<<b1.volume();
}