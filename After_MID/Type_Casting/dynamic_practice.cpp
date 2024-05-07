#include<iostream>
using namespace std;
class Base
{
      public:
      virtual void dummy()
      {
            cout<<"In dummy function ";
      }
};
class Derived : public Base
{
      public:
      int x;
};
int main()
{
      Base *pb = new Derived;
      Derived *pd = dynamic_cast<Base*>(pb);
      Base *p = dynamic_cast<Derived*>(pd);
      if(pd==0)
      {
            cout<<"null ptr ";

      }
      else 
      {
            cout<<"Casting success "<<endl;
      }
      cout<<pd<<endl;
      cout<<p;
      
      return 0;
}