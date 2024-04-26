#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	bitset<8> mybitset;  //we just create a bitset of size 8
	mybitset.set(7); //here we set our position and at that position we get 1
	mybitset.set(6);   //we read it from the right most
	mybitset.set(5);
	
	cout<<"Binary representation "<<mybitset<<endl;
	
	return 0;
}