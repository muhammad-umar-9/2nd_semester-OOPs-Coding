#include<iostream>
using namespace std;
class Box
{
    int length,width,height,area,volume;
    
    public:
    Box(int x, int y)
    {
        length=x;
        width=y;
    }
    
    Box(int x, int y, int z)
    {
        length=x;
        width=y;
        height=z;
    }
    
    void Area();
    void Volume();
};

void Box::Area()
{
    area=length*width;
    cout << area << endl;
}

void Box::Volume()
{
    volume=length*width*height;
    cout<<volume<<endl;
}

int main()
{
	int l1,w1,h;
    cout<<"Enter length and width for area:"<<endl;
    cin>>l1>>w1;
    Box box1(l1,w1);
    box1.Area();
    
    cout<<endl;
    
    cout<<"Enter length , width and height for volume"<<endl;
    cin>>l1>>w1>>h;
    Box box2(l1,w1,h);
    box2.Volume();
    
}