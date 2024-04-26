#include<iostream>
using namespace std;

int table(int x)
{
	int z;
	
	for(int i=1; i<=10; i++)
	{
		z=x*i;
	    cout<< x <<" * "<< i <<" = "<< z <<endl;
	}
}
int main()
{
	int a;
	cout<<"enter a"<<endl;
	cin>>a;
	cout<<"Your table of "<< a <<" is"<<endl;
	table(a); //pass by value as a is paased by x in function
}