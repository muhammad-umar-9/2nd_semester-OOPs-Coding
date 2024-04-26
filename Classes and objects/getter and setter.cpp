#include <iostream>
using namespace std;
class Employee {
	private:
 		// Private attribute
 	int salary;
	public:
		 // Setter
 	void getSalary();
 		// Getter
 	void displaySalary();
	 };
	 
void Employee::getSalary()
{
	cout<<"Enter salary: ";
	cin>>salary;
}
void Employee::displaySalary()
{
	cout<<"Your salary is :"<<salary;
}


int main()
 {
	Employee s;
	s.getSalary();
	s.displaySalary();
return 0;
}