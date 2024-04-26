#include<iostream>
using namespace std;

class student
{
	private:
		int roll_no;
		string name;
		int mobile_no;
	public:
	void getdata();
	void displaydata();
		
};

void student::getdata()
{
	cout<<"Enter roll number: "<<endl;
	cin>>roll_no;
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"Enter Mobile number: "<<endl;
	cin>>mobile_no;
}
void student::displaydata()
{
	cout<<"Your roll number is : "<<roll_no<<endl;
	cout<<"Your name is : "<<name<<endl;
	cout<<"Your mobile number is : "<<mobile_no<<endl;
}
int main()
{
	student s;
	s.getdata();
	s.displaydata();
	return 0;
}