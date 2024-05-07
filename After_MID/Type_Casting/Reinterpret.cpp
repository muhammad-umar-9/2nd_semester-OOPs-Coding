#include<iostream>
using namespace std;

class Banana
{
      public:
      void intro()
      {
            cout<<"Eat Banana ";
      }
};
class Mango
{
      public:
      void intro()
      {
            cout<<"Eat Mango ";
      }
};
int main()
{
      Banana *pb;
      Mango *p_1;
      Banana *p = reinterpret_cast<Banana*>(pb);
      Mango *pm = reinterpret_cast<Mango*>(pb);
      
      cout<<p<<"\n";
      cout<<pm;
      return 0;

}