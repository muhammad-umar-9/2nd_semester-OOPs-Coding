#include<iostream>

using namespace std;

int p=7; //global variable

void print()
{
	cout<<p<<endl;
}

void functionname(int param1 , int param 2) //formal parameters
{
	//code
}

int main()
{
	int p=5;  //local variable
	
	cout<<p<<endl;   //local variable >> global
	
	print();  //here print 7 because function take global variable
	
	cout<<::p<<endl;  //scope resolution(::) to access global variable in main function with same variable name
	
	int a,b;
	a =5;
	b =6;
	functionname(a,b);  //actual parameter
}

