// Program for copy constructor
#include<iostream>
#include<string.h>

using namespace std;
class Student
{
    private:
    int rno;
    char name[50];
    public:
    Student(int rno,char name[])
    {
        this->rno=rno;
        strcpy(this->name,name);
    }
    Student()
    {}
    Student(Student &S)
    {
         this->rno=S.rno;
         strcpy(this->name,S.name); 
    }
    void display()
    {
        cout<<"Roll No: "<<rno;
        cout<<"\nName: "<<name;
    }
};
int main()
{
      
      Student S1(101,"vishal");
      Student S2=S1;  // Copy Constructor  
      S2.display();
      
}