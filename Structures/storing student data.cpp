#include<iostream>
using namespace std;

struct student
{
	char name[15];
	int roll_no;
	float marks;
	void data()
	{
		cout<<"Your name is "<<name<<endl;
		cout<<"Your roll_no is "<<roll_no<<endl;
		cout<<"Your marks are "<<marks<<endl;
	}
}s1;

int main()
{

    int  MAX_STUDENTS = 2; // You can adjust the number of students as needed
   student s1[MAX_STUDENTS];  //an array to store data of multiple students

   for(int i=0; i<MAX_STUDENTS; i++)
    {
        cout << "Enter your name, roll_no, marks: ";
        cin >> s1[i].name >> s1[i].roll_no >> s1[i].marks;
       
    }
    
    //for displaying result
    for(int j=0; j<MAX_STUDENTS; j++)
    {
    	cout<<" detail of student "<<j+1<<endl;
    	s1[j].data();
	}
    
	return 0;

}

