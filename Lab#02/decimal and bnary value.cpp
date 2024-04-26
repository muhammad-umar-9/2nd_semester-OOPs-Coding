#include<iostream>
#include<bitset>
using namespace std;
int main()
{
	int a,b;
	bitset<15> u;
	cout<<"Enter a:"<<endl;
	cin>>a;
	cout<<"Enter b:"<<endl;
	cin>>b;
	cout<<"Binary value of a is :"<<bitset<8>(a)<<endl;
	cout<<"Binary value of a is :"<<bitset<8>(b)<<endl;
	cout<<"Decimal value of a and b is: "<<(a & b)<<endl;
	cout<<"Binary value of a and b is:"<<bitset<8>(a & b)<<endl;
	
	cout<<u;
}