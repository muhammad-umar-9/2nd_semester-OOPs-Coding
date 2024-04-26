#include<iostream>

using namespace std;

struct student
{
	int rollno, age ;
	char name[20];
	float marks;
	void introduction()
	{
		cout<<"Your roll number is :"<<rollno<<endl;
		cout<<"Your age is :"<<age<<endl;
		cout<<"Your name is :"<<name<<endl;
		cout<<"Your marks is :"<<marks<<endl;
	}
}s1,s3;

int main()
{
//	student s1,s3;
	
	//from taking input from user
	
	cout<<"Enter your Roll number,age,name and marks"<<endl;
	cin>>s1.rollno>>s1.age>>s1.name>>s1.marks;
	s1.introduction();
	
	cout<<endl;
	
//	cout<<"Your roll No is: "<<s1.rollno<<endl;
//	cout<<"Your age is: "<<s1.age<<endl;
//	cout<<"Your Name is: "<<s1.name<<endl;
//	cout<<"Your marks is: "<<s1.marks<<endl;
	
	student s2={20,10,"Falah",3};   //initialization of structure variable
	
    s2.introduction();  //by writing instead of all cout , we can use simply function
//	cout<<s2.rollno<<endl;
//	cout<<s2.age<<endl;
//	cout<<s2.name<<endl;
//	cout<<s2.marks<<endl;
	
	//structure variable in assignment statement
	
	s3=s2;
	
//	cout<<s3.rollno<<endl;
//	cout<<s3.age<<endl;
//	cout<<s3.name<<endl;
//	cout<<s3.marks<<endl;
	
	return 0;
	
	
}