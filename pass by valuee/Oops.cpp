#include<iostream>
#include<cmath>
using namespace std;

int add(int n1 , int n2)
{
	return n1+n2;
}
int add(int n1 , int n2 , int n3)
{
	return n1+n2+n3;
}
 double add(float n1 , float n2)
{
	return n1+n2;
}
int main()
{
	int a,b,c;
	
	a=5;
	b=6;
	c=7;
	float d,e;
	d=6.4;
	e=6.3;
	cout<<add(a,b)<<endl;
	cout<<add(a,b,c)<<endl;
	cout<<add(d,e)<<endl;
	
	cout<<pow(a,b)<<endl; //library function
	cout<<sqrt(b)<<endl;  //library function
}