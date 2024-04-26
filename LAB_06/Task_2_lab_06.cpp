#include<iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int age;
		static int total_Employees;
		static int next_Employee_ID;
	public:

		Employee(int Age , string Name)
		{
			name = Name;
			age = Age;
			total_Employees++;
			next_Employee_ID++;
		}
	void Display()
	{
		cout<<"Your Name is :"<<name<<endl;
		cout<<"Your Age is :"<<age<<endl;
		cout<<"Your  total_Employees:"<<total_Employees<<endl;
		cout<<"Your Employ Id :"<<next_Employee_ID<<endl;
	}
		
};

int Employee::total_Employees = 0; //we initilize statuc data member outside the class
int Employee::next_Employee_ID = 0;

int main()
{
	Employee E1(20 , "Omer");
	E1.Display();
	Employee E2(25 , "Umar");
	E2.Display();
	return 0;
	
}