#include<iostream>
using namespace std;

class Employee
{
    private:
        char id[5];
        int hours;
        friend int CalculateTotalSalary(Employee &emp);
    public:
        Employee()
        {
            cout<<"Enter your ID: ";
            for(int i = 0; i<5; i++)
            {
                cin>>id[i];
            }
            cout<<endl;
            cout<<"Enter the number of working hours: h";
            cin>>hours; 
        }
};
int CalculateTotalSalary(Employee &emp)
{
    if(emp.id[0]=='p'||emp.id[0]=='P')
    {
        if(emp.hours>=200)
        {
            return (emp.hours*750)+750;
        }
        else
        {
            return emp.hours*750;
        }
    } 
    else if(emp.id[0]=='H'||emp.id[0]=='h')
    {
        if(emp.hours>=250)
        {
            return (emp.hours*1000)+500;
        }
        else
        {
            return emp.hours*1000;
        }
    }
}
int main()
{
    char n;
    Employee e,f;
    cout<<"The total salary is : Rs" <<CalculateTotalSalary(e)<<endl;
    for(int i =2; i<4 ;i++)
    {
        cout<<"Do you want to continue(y/n):  ";
        cin>>n;
        if(n=='y')
        {
//            Employee ei;
            cout<<"The total salary is : Rs" <<CalculateTotalSalary(f)<<endl;  
        }
        else if(n=='n')
        {
            break;  
        }
    }
}

