
#include<iostream>
using namespace std;

class Unary
{
      private:
      int u1 , u2;
      public:
      Unary(int a =0 , int b = 0) : u1{a} , u2{b} {}
      void print()
      {
            cout<<"X is "<< u1 <<" "<< "Y is :"<< u2 ;
      }
      Unary operator - ()
      {
            return Unary(-u1 , -u2);
      }
      
};
int main()
{
      Unary U(4 , 7);
      Unary U1 = -U;
      U1.print();
}
