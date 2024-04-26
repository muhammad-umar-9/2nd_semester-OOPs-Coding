#include<iostream>
using namespace std;

class student
{
	private:
	int marks;
	public:
	void input_marks()
	{
		cout<<"Enter marks"<<endl;
		cin>>marks;
	}	
	void output_marks()
	{
		cout<<"You entered "<<marks;
	}
};
int main()
{
	student s1;
	s1.input_marks();
	s1.output_marks();
}