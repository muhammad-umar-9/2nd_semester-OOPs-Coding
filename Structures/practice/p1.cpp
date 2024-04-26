#include<iostream>
using namespace std;

struct complex
{
	float real;
	float imaginary;
}c1,c2,sum;
complex addcomplex(complex c1, complex c2);
int main()
{
	cout<<"First real"<<endl;
	cin>>c1.real;
	cout<<"First imaginar"<<endl;
	cin>>c1.imaginary;
	cout<<"2nd real"<<endl;
	cin>>c2.real;
	cout<<"2nd imaginar"<<endl;
	cin>>c2.imaginary;
	addcomplex(c1,c2);

	return 0;
}
complex addcomplex(complex c1, complex c2)
{
	sum.real=c1.real+c2.real;
	sum.imaginary=c1.imaginary+c2.imaginary;
	
	cout<<"Your sum is "<<sum.real;
	if(sum.imaginary>0)
	{
		cout<<"+"<<sum.imaginary<<"i";
	}
	else
	{
		cout<<sum.imaginary<<"i";
	}
}