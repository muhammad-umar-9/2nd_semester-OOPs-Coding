#include<iostream>
using namespace std;
class Benifits
{
      public:
      bool has_Health_Insurance;
      bool has_Retirement_Plan;

      public:
      Benifits(bool a , bool b)
      {
            has_Retirement_Plan = a;
            has_Health_Insurance = b;
      }
      void set(bool a)
      {
            has_Health_Insurance = a;
      }
      void set(bool b)
      {
            has_Retirement_Plan = b;
      }
      bool get() const
      {
            return has_Health_Insurance;
      }
      bool get() const
      {
            return has_Retirement_Plan;
      }
};
class Employee
{
      public:
      string E_name;
      int E_code;
      string E_designation;
      float E_Salary;

      public:

      Benifits b;
      virtual float Annual_Salary()
      {
            return E_Salary;
      }
     friend istream& operator >> (istream& input , Employee& emp);
     friend ostream& operator << (ostream& output , Employee& emp1)
};
 istream& operator >> (istream& input , Employee& emp)
	{
		input >> emp.E_name >> emp.E_code >> emp.E_designation >> emp.E_Salary;
		return input;
	}


ostream& operator << (ostream& output , Employee& emp1)
	{
		output <<"Employee name: "<< emp1.E_name;
            output <<"Employee Code: "<< emp1.E_code;
            output <<"Employee designation: "<< emp1.E_designation;
            output <<"Employee Salary: "<< emp1.E_Salary;
		return output;
	} 

class Manager : public Employee
{
      public:
      float Annual_Salary()
      {
            return E_Salary * 0.2;
      }
      
     friend istream& operator >> (istream& input , Manager&man);
     friend ostream& operator << (ostream& output , Manager& man1);


}; 
istream& operator >> (istream& input , Manager&man)
	{
		input >> man.E_name >> man.E_code >> man.E_designation >> man.E_Salary , (man.b.has_Health_Insurance?"yes":"No") , (man.b.has_Retirement_Plan?"yes":"No");
		return input;
	}
ostream& operator << (ostream& output , Manager& man1)
	{
		output <<"Manager name: "<< man1.E_name;
            output <<"Manager Code: "<< man1.E_code;
            output <<"Manager designation: "<< man1.E_designation;
            output <<"Manager Salary: "<< man1.E_Salary;
		return output;
	} 

class Supervisor : public Employee
{
      public:
      float Annual_Salary()
      {
            return E_Salary * 0.1;
      }
      
     friend istream& operator >> (istream& input , Supervisor&man);
     friend ostream& operator << (ostream& output , Supervisor& man1);


}; 
istream& operator >> (istream& input , Supervisor& s)
	{
		input >> s.E_name >> s.E_code >> s.E_designation >> s.E_Salary , (s.b.has_Health_Insurance?"yes":"No") , (s.b.has_Retirement_Plan?"yes":"No") ;
		return input;
	}
ostream& operator << (ostream& output , Supervisor& s)
	{
		output <<"Supervisor name: "<< s.E_name;
            output <<"Supervisor Code: "<< s.E_code;
            output <<"Supervisor designation: "<< s.E_designation;
            output <<"Supervisor Salary: "<< s.E_Salary;
		return output;
	} 

  int main()
  {
      Manager m1;
      cin>>m1;
      cout<<endl;
      cout<<m1;


      return 0;

  }    

