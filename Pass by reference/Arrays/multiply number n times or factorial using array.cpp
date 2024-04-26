#include<iostream>

using namespace std;

int main()
{
	int array[5];
	int product=1; //identity element of multiplication is 1 (for addition we use 0)
	cout<<"Enter elements to multiply"<<endl<<"\n";
	cout<<"Enter elements in sequence from 1  to show factorial"<<endl;
	
	
	for(int i=0; i<5; i++)
	{
		cin>>array[i];
	}
	for(int i=0; i<5; i++)
	{
		product=product*array[i];
	//	cout<<"your next number is "<<product <<endl; //to show every next element
	}
	cout<<"your product of give numbers is "<<product <<endl<<"\n";
	cout<<"if you enter number in sequence then factorial is "<<product<<endl;
}