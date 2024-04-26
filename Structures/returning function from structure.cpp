#include <iostream>
using namespace std;

struct Person 
{
    char name[50];
    int age;
    float salary;
}p,p1;

Person Data_input(Person); 
void Show_Data(Person); 

int main() 
{
    p1 = Data_input(p);
    p = p1;
    Show_Data(p);

    return 0;
}

Person Data_input(Person p) 
{


    cout<<"Enter Full name: ";
    cin.get(p.name, 50);

    cout<<"Enter age: ";
    cin>>p.age;

    cout<<"Enter salary: ";
    cin>>p.salary;

    return p;
}
 Person Show_Data(Person p) 
{
    cout << "\nDisplaying Information." <<endl;
    cout<<"Name: " <<p.name <<endl;
    cout<<"Age: " <<p.age <<endl;
    cout<<"Salary: " <<p.salary;
}
