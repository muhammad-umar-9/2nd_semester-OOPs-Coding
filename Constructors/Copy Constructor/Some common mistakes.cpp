//Program for tricky question of over loading
#include<iostream>
#define clrscr() system("cls")
using namespace std;
class Test
{
         int m;
         float n;
         double r;
       public:
       Test(int x)
       { 
           cout<<"\nConstructor with integer arguments ";
           m=x;
           cout<<m;
       }
       Test(float y) 
       {
          cout<<"\nConstructor with float arguments ";
          n=y;
          cout<<n;
       }
    //    Test(double d)
    //    {
    //        cout<<"\nConstructor with double arguments";
    //        r=d;
    //    }
};
int main()
{
       Test T1(90);  // Integer
      Test T2(12.56f);  // Float
      Test T3(12.56);// double
      return 0;
}