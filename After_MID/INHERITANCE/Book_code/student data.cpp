#include<iostream>
using namespace std;

class Person
{
	private:
	int id;
	string name , adress;
	public:
	Person()
	{
		id = 0;
		name = "o";
		adress = "o";	
	}	
	void input_1()
	{
		cout<<"Enter ID , Name and adress ";
		cin>> id >> name >> adress;
	}
	void display_1()
	{
		cout<<"Student  information "<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Adress : "<<adress<<endl;
		cout<<"ID : "<<id<<endl;
	}
//	friend class student;   //make this when you privately or protected inherit
//	friend int main();
};
class Student : public Person
{
	private:
		int number , marks;
	public:
	Student()	
	{
		
		number = 0;
		marks = 0;
		
	}
	void input_2()
	{
		cout<<"Enter number and marks "<<endl;
		cin>> number >> marks ;
	}
	void display_2()
	{
		cout<<"Student secret information "<<endl;
		cout<<"Number "<< number <<endl;
		cout<<"Marks "<< marks ;
	}
//	friend int main();     //make this when you privately or protected inherit
};
int main()
{
	Student s1;
	s1.input_1();
	s1.input_2();
	s1.display_1();
	s1.display_2();
	
	return 0;
}


