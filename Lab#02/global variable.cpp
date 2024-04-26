#include<iostream>
using namespace std;

 int a=8;
 int b=6;
int multiply()
{
	return a*b;
	
}
void print(int (*mptr)())
{
	cout<<"Product value is:"<<mptr();
	
}
int main()
{
	cout<<"Enter a and b"<<endl;  //we can declare and initialize at global 
	cin>>a>>b;
	print(multiply);
	return 0;
}