#include<iostream>
using namespace std;
class Assignment
{
      private:
      int *x;
      public:
      Assignment(int val = 0)
      {
            x = new int (val);
      }
      void Set(int val)
      {
            *x = val;
      }
      void display()
      {
            cout<<"Our X Is :"<< *x <<endl;
      }
      Assignment & operator = (const Assignment & rhs)
      {
            if(this != rhs)
            {
                  *this = *rhs.x;
            }
            else
            return *this;
      }
      ~Assignment()
      {
            delete x;
      }
};
int main()
{
      Assignment A1(20);
      Assignment A2;
      A2 = A1;
      A1.Set(30);
      A1.display();
      A2.display();
      return 0;
}