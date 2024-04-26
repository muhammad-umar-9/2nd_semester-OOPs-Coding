#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int y1,y2;
		 y1= 20;
		 y2= 34;
	
	cout<<"Binary value of y1: "<<bitset<8>(y1)<<endl;
	cout<<"Binary value of y2: "<<bitset<8>(y2)<<endl;
	
	cout<<"Binary value of y1 AND y2: "<<bitset<8>(y1 & y2)<<endl; 
	cout<<"Binary value of y1 OR y2: "<<bitset<8>(y1 | y2)<<endl;
	
	cout<<"Binary valuue of complement y1: "<<bitset<8>(~y1)<<endl; //inverse of y1 
	cout<<"Binary valuue of complement y2: "<<bitset<8>(~y2)<<endl; //inverse of y2
	
	cout<<"Binary value of complement y1 AND y2: "<<bitset<8>(~y1 & ~y2)<<endl;  //inverse of or operator
	cout<<"Binary valuue of complement y1 OR y2: "<<bitset<8>(~y1 | ~y2)<<endl;   //inverse of and operator
	
	cout<<"Binary valuue of XOR operator: "<<bitset<8>(y1 ^ y2)<<endl;      //it will give zero if both elements are same
}