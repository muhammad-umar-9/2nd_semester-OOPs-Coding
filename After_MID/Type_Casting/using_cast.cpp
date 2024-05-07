#include<iostream>
using namespace std;
class CDummy
{
      int i;
    
};
class CAddition
{
      private:
      int x , y;
      public:
      CAddition(int a , int b)
      {
            x = a;
            y = b;
      }
      int sum()
      {
            return x+y;
      }
};
int main()
{
      CDummy d;
      CAddition *ptrAdd;
      ptrAdd = (CAddition*) &d;
      cout<<ptrAdd->sum();
      return 0;

}




