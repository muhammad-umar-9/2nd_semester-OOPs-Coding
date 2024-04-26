#include<iostream>
using namespace std;

#define Rectangle_Area(l,b) (l*b)  //syntax -> preprocessor directive , Macro Name  , Opertion

int main()
{
	int l,b,area;
	cout<<"Enter length "<<endl;
	cin>>l;
	cout<<"Enter Width  "<<endl;
	cin>>b;
	area =	Rectangle_Area(l,b);
	cout<<"Reactangle Area is: "<<area;
}