#include<iostream>

using namespace std;

swap(int *x , int *y)
{
	int temp;
	
	temp = *x; //dereference x to store value at that adress (on RHS)
	*x = *y ;  //derefence y and st it to x
	*y= temp;
}
int main()
{
	int x,y;
	cout<<"Enter x and Y"<<endl;
	cin>>x>>y;
	
	cout<<"Before swaping: "<< "\n" <<" x is: "<< x <<" Y is : "<< y <<endl<<"\n";
	
	int *ptrx = &x;
	int *ptry = &y;
	
	swap(ptrx , ptry); //pass by refence
	
	cout<<"After swaping: "<< "\n" <<" x is: "<< x <<" Y is : "<< y <<endl<<"\n";
	
	return 0;
}


//This will not work for swapping

/*
swap(int a , int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int c , d;
	cout<<"Enter two numbers"<<endl;
	cin>>c>>d;
	cout<<"Before swaping: "<< "\n" <<" c is: "<< c <<" d is : "<< d <<endl<<"\n";
	swap(c,d);
	cout<<"After swaping: "<< "\n" <<" c is: "<< c <<" d is : "<< d <<endl<<"\n";
	
	return 0;
}
*/
