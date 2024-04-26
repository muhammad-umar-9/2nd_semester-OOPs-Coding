#include<iostream>
using namespace std;

int multiply(int a, int b)
{
	return a*b;
	
}
void print (int(*mptr)(int,int),int a,int b)  //total three parameters 
{
	cout<<"The product value is:"<<mptr(a,b);
}
int main()
{
	int x,y;
	cout<<"Enter x and y value for product"<<endl;
	cin>>x>>y;
	print(multiply,x,y); //call multiply function in *mptr > referencing
}