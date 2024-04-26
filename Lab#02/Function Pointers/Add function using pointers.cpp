#include<iostream>
using namespace std;

int add(int a , int b)
{
	return a+b;
}
int main()
{
	int c;
	int (*p)(int,int);
	p = &add;
	c=(*p)(4,5);
	cout<<c;
}