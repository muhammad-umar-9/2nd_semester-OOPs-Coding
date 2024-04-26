#include<iostream>
using namespace std;

struct complex
{
	float real;
	float imaginary;
}c1,c2,sum;

complex add_complex(complex c1,complex c2);

int main()
{
	cout<<"Enter real part of Ist number "<<endl;
	cin>>c1.real;
	cout<<"Enter imaginary part of Ist number "<<endl;
	cin>>c1.imaginary;
	
	cout<<"Enter real part of 2nd number "<<endl;
	cin>>c2.real;
	cout<<"Enter imaginary part of 2nd number "<<endl;
	cin>>c2.imaginary;
	
//	sum.real=c1.real+c2.real;
//	sum.imaginary=c1.imaginary+c2.imaginary;
	
	add_complex( c1, c2);
	
  cout<<"Your complex sum is: "<<sum.real;
    if (sum.imaginary>=0) 
	{
        cout<<"+" <<sum.imaginary <<"i"<< endl;
    }
	 else
	 {
        cout<<"-"<< -sum.imaginary<<"i"<<endl;
    }
	
}
complex add_complex(complex c1,complex c2)
{
	sum.real=c1.real+c2.real;
	sum.imaginary=c1.imaginary+c2.imaginary;
}

