#include<iostream>
using namespace std;

enum month
{
	jan,feb,march //but if we assign values to them e.g jan=12
};

int main()
{
	month m;
	m = jan;
	
	cout<<m; //it will print the place where it is present
	        //but if we assign values to them e.g jan=12 then it will print the value
}