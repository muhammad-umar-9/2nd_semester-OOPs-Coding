#include<iostream>

using namespace std;
/*
int changevalue(int x) //formal parameter
{
	x=20;
	
}
int main()
{
	int a=5;
	changevalue(a);  //pass by value (value of actual parameter copied to formal parameter)
	cout<<a;
}
*/

//Maximum numbers

int max(int a , int c)
{
	if(a>c)
	{
		cout<<a;
	}
	else if(c>a)
	{
		cout<<c;
	}
	else
	return 1;
}
int main()
{
	int a,b;
	cout<<"Enter a and b"<<endl;
	cin>>a>>b;
	cout<<"your largest number is "<<endl;
	max(a,b);
}





