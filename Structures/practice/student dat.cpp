#include<iostream>
using namespace std;

struct day
{
	int date,month,year;
};

struct student
{
	int Reg_No;
	string name;
	day date_of_birth;
};
int main()
{
	student s1;
	cout<<"Enter your Data"<<endl;
	cout<<"Enter your Reg No "<<endl;
	cin>>s1.Reg_No;
	cout<<"Enter your Name "<<endl;
	cin>>s1.name;
	cout<<"Enter your Date of birth "<<endl;
	cin>>s1.date_of_birth.date>>s1.date_of_birth.month>>s1.date_of_birth.year;
	
	cout<<"Display information "<<endl;
	cout<<s1.Reg_No<<endl;
	cout<<s1.name<<endl;
	cout<<s1.date_of_birth.date<<" "<<s1.date_of_birth.month<<" "<<s1.date_of_birth.year<<endl;
}