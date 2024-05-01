#include<iostream>
using namespace std;
template<class T , class M>
class Student
{
      private:
      T Name;
      M Marks;
      public:
      Student(T a , M b):Name(a) , Marks(b) {}
      T getname()
      {
            return Name;
      } 
      M getmarks()
      {
            return Marks;
      }
};
int main()
{
      Student<string , int >S1("Umar ",900);
      cout<<"Name : "<<S1.getname()<<endl;
      cout<<"Marks : "<<S1.getmarks()<<endl;

      return 0;
}
