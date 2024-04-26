#include<iostream>
using namespace std;

class Person
{
	public:
		int P_id , P_age;
		string P_name;
	virtual void display()
	{
		cout<<"Your name is "<<P_name;	
	}	
};
class Teacher : public Person
{
	public:
		int T_id , T_age;
		string T_name;
			
		
};
class Student : public Person
{
	public:
		int S_id , S_age;
		string S_name;
	void display() override 
	{
		cout<<"I am in student class "<<endl;
		cout<<"Your name is "<<P_name;	
	}		
};
int main()
{
	Student s;
	s.P_name = "Omer";
	s.display();
	
	s.P_name = "Umer ";
	s.display();
	
	return 0;
}