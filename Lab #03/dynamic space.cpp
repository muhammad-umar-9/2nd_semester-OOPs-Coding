#include<iostream>
using namespace std;
int main()
{
	int * p = new int;  //first make space , so destroy it after its usage
	cout<<"Enter value "<<endl;
	cin>>*p;
	cout<<"Adress of value is:"<<p<<endl<<"value is : "<<*p;
	
	delete p;
}