#include<iostream>
using namespace std;

class Employee
{
	private:
		char Id[5];
		int hours;
		friend int total_salary(Employee &emp);
	public:
	Employee()
	{
		cout<<"Enter your name "<<endl;
		for(int i=0; i<5; i++)
		{
			cin>>ID[i];
		}
		cout<<"Enter the number of working hours"<<endl;
		cin>>hours;
	}
};		
int total_salary(Employee &emp);
{
	if(emp.ID[0] == 'p' || emp.ID[0] == 'P')
	{
		if(emp.hours >= 200)
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
	
	
	return 0;
}

	
	
