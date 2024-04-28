#include<iostream>
using namespace std;
class Add
{
      private:
      int a , b;
      public:
      Add(int x=0 , int y=0)
      {
            a = x;
            b = y;
      }
      Add operator + (Add& point)
      {
            Add p1;
            p1.a = a + point.a;
            p1.b = b + point.b;
            return p1;
      }
      Add Subtract(const Add &s1)
      {
            Add p2;
            p2.a = a - s1.a;
            p2.b = b - s1.b;
            return p2;

      }
      void display()
      {
            cout<<"X is : "<< a << "Y is : "<< b ;
      }

};
int main()
{
      system("cls");
      Add A1(2 , 3) , A2(4 , 5) ;
      Add A3 = A1 + A2;
      A3.display();

      Add a4 = A1.Subtract(A2);  //by using function we can also add two objects
      a4.display();
      return 0;
}