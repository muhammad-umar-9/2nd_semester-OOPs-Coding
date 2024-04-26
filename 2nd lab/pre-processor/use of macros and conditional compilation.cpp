#include <iostream>
using namespace std;

#define TABLE_SIZE 100

#define MIN(a,b) ((a)<(b) ? (a) : (b))  //The macro uses the ternary conditional operator (? :) to compare a and b. If a is less than b, it returns a; otherwise, it returns b.

int main() 
{
	int x,y;
	x=50;
	y=60;
	cout<<"The minimum value is: "<<MIN(x,y);
	
#ifndef TABLE_SIZE     //(if not defined)  //it means that if table size is not defined then use below code till #endif
#define TABLE_SIZE 100   

	int table[TABLE_SIZE];
	
#endif 

#ifdef TABLE_SIZE  //if table size is defined then use this

	int table[TABLE_SIZE];
	
#endif	

#ifdef TABLE_SIZE > 200

#undef TABLE_SIZE  //Undefines the existing macro TABLE_SIZE

#define TABLE_SIZE 200

#elif TABLE_SIZE<50 //else if ,the first condition is not true, and the value of TABLE_SIZE is less than 50, it enters this block.

#undef TABLE_SIZE

#define TABLE_SIZE 50   //Undefines the existing macro TABLE_SIZE

#else            //If neither of the above conditions is true

#undef TABLE_SIZE    //#undef is used to ensure that any existing definition of TABLE_SIZE is cleared before redefining it.

#define TABLE_SIZE 100

#endif

table[TABLE_SIZE];

#if 0

cout<<"Hello World C++ "<<endl;

#endif


	
}
 