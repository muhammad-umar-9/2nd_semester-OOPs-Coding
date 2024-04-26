#include<iostream>
using namespace std;

//The semicolon is not required because the macro definition is not a statement, but rather a preprocessor directive

#define pi 3.14529  //At the end no semicolon placed in Macro

int main()
{
	float radius,area;
	radius=4;
	area=pi*radius*radius;
	cout<<area;
}
