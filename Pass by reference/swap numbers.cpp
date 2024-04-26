#include<iostream>
using namespace std;

int changevalue(int &y , int &z)
{
	y=34;
	z=56;
}

int main()
{
	int a,b;
	a=5;
	b=6;
	changevalue(a,b);
	cout<<a<<" "<<b<<endl;
	
	
	/*
	int p=5;
	int &q=p;
	q++;
	cout<<p<<endl;
	cout<<&p<<endl; //both p and q have same memory adress
	cout<<&q;
	*/
}