#include<iostream>

using namespace std;

int swapnumbers(int &x , int &y)
{
	int temp;
	cout<<"before swapping\n"<<endl;
	cout<<"your x is "<< x <<" and "<<"your y is "<<y<<"\n"<<endl;
	temp=x;
	x=y;
	y=temp;
	cout<<"values after swapping\n"<<endl;
	cout<<"your x is "<< x <<" and "<<"your y is "<<y<<endl;

	
}
int main()
{
	int a,b;
	cout<<"Enter values for swaping"<<endl;
	cin>>a>>b;
	swapnumbers(a,b);
}