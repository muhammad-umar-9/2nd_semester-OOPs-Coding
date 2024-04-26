// Header Files
#include <iostream>
#include<conio.h>
using namespace std;
// Class Declaration
class Person {
 //Access - Specifier
public:
 //Member Variable Declaration
 string name;
 int age;
 //Member Functions read() and print() Declaration
 void print() {
 //Show the Output
 cout << "Name : " << name << endl<<"Age : " << age << endl;
 }
};
int main() {
 // Object Creation For Class
 Person obj;
 cout << "Simple Class and Object Example Program In C++\n";
 cout << "Enter the Name :";
 cin >> obj.name;
  cout << "Enter the Age :";
 cin >> obj.age;
 
 obj.print();
 getch();
 return 0;
}