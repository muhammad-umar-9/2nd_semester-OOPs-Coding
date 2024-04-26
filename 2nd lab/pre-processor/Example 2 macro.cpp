#include <iostream> 
 using namespace std;
// macro with parameter 
#define AREA(a,b) (a*b)   //first we use separate variable for passing value and declare them and after that we use our operation
int main() 
{ 
	int a1,a2,area;
  	 a1=11;
 	 a2=10;
 	 area = AREA(a1,a2); 
 
 cout<<"Area of rectangle is: " <<area; 
 
 return 0; 
}