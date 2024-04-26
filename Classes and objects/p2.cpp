#include<iostream>
using namespace std;
class Array
{	
	private:
	int a[5];
	public:
	void fill();
	void display();
	int max();
	int min();
};
void Array::fill()
{
	for(int i=0; i<5; i++)
	{
		cout<<"Enter values"<<endl;
		cin>>a[i];
	}
}
void Array::display()
{
	for(int i=0; i<5; i++)
	{
		cout<<"You enter values "<<a[i];
	}
}
int Array::max()
{
	int m=a[0];
	for(int i=0; i<5; i++)
	{
		if(m<a[i])
		{
			m=a[i];
		}
		return m;
	}
}
int Array::min()
{
	int m=a[0];
	for(int i=0; i<5; i++)
	{
		if(m>a[i])
		{
			m=a[i];
		}
		return m;
	}
}
int main()
{
	Array arr;
	arr.fill();
	cout<<"You entered following values"<<endl;
	arr.display();
	cout<<"Your maximum value is:"<<arr.max();
	cout<<"Your minimum value is:"<<arr.min();
	return 0;
}



