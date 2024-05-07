#include<iostream>
using namespace std;
class Base
{
      public:
      virtual void intro(){}

};
class Derived1 : public Base
{
      public:
      void intro()
      {
            cout<<"Derived Class";
      }
};
class Derived2 : public Base
{
      public:
      void intro()
      {
            cout<<"Derived_2 Class";
      }
};
int main()
{
      Derived1 *pd_1;
      Base *pb_2;
      Base *pb = dynamic_cast<Derived1*>(pd_1);
      if(pb == 0)
      {
            cout<<"Null ptr ";
      }
      else
      {
            cout<<"not a null ";
      }
      Derived2 *pd_2 = dynamic_cast<Base*>(pb_2);
      if(pd_2 == 0)
      {
            cout<<"Null Pointer ";
      }
      else
      {
            cout<<"Not a null pointer";
      }

      

      return 0;

}