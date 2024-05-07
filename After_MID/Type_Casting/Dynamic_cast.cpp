#include<iostream>
using namespace std;

class Cbase
{
      
      public:
      virtual void dummy()
      {
      };
};
class CDerived : public Cbase
{
     int a;
    
};
int main()
{
      system("cls");
      Cbase *pba = new CDerived;
      Cbase *pbb = new Cbase;
      CDerived *pd;
      Cbase *p;
       pd = dynamic_cast<CDerived*>(pba);
       if(pd != 0)
       {
            cout<<"Null Pointer on first type cast "<<endl;
       }
       pd = dynamic_cast<CDerived*>(pbb);
       if(pd == 0)
       {
            cout<<"Null Pointer on Second type cast "<<endl;
       }

       p = dynamic_cast<CDerived*>(pba);
       cout<<p;

      return 0;

}