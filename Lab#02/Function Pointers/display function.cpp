#include<iostream>
using namespace std;
struct country
{
	string name;
	long population;
}c1;    //if we make variable global then don't need to pass it from function
        //if we pass from function then it works same
void display()
{
	
	
	cout<<"country name is "<<c1.name<<endl;
	cout<<"Population of country is "<<c1.population<<endl;
}

